#include <iostream>
#include <cmath>
#include <vector>
#include <limits>
using namespace std;

struct Result
{
    int height = 0;
    int time = numeric_limits<int>::max();
};

Result Flattening(vector<vector<int>> land, int B, int average, int upper, int lower);
void getUpperLowerValues(vector<vector<int>> land, int average, int &upper, int &lower);
int main()
{
    int N, M;
    int upper = 0, lower = 0;
    long long B;
    cin >> N >> M >> B;
    vector<vector<int>> land(N, vector<int>(M));
    int maxVal = 0;
    int minVal = 300;
    int sum = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            cin >> land[i][j];
            sum += land[i][j];
            if (land[i][j] > maxVal)
                maxVal = land[i][j];
            else if (land[i][j] < minVal)
                minVal = land[i][j];
        }
    Result ans;
    for (int i = minVal; i <= maxVal; i++)
    {
        Result temp = Flattening(land, B, i, upper, lower);
        if (temp.time < ans.time)
        {
            ans.time = temp.time;
            ans.height = temp.height;
        }
        else if (temp.time == ans.time)
            ans.height = ans.height < temp.height ? temp.height : ans.height;
    }

    cout << ans.time << " " << ans.height << endl;
}
void getUpperLowerValues(vector<vector<int>> land, int average, int &upper, int &lower)
{
    int tmp;
    int N = land.size();
    int M = land[0].size();
    upper = 0;
    lower = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            tmp = land[i][j] - average;
            if (tmp < 0)
                lower += -tmp;
            else if (tmp > 0)
                upper += tmp;
        }
}
Result Flattening(vector<vector<int>> land, int B, int average, int upper, int lower)

{
    Result result;
    result.time = 0;
    getUpperLowerValues(land, average, upper, lower);
    if (B < lower)
    {
        int tmp = lower - B;
        if (tmp > upper)
        {
            Result a;
            return a;
        }
        else
        {
            upper -= tmp;
            B += tmp;
            result.time += tmp * 2;
        }
    }

    result.time += lower;
    B -= lower;
    result.time += 2 * upper;
    result.height = average;
    return result;
}
