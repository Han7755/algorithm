#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

struct Result
{
    int height = 0;
    int time = 0;
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

    int sum = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            cin >> land[i][j];
            sum += land[i][j];
        }
    int average = sum / (N * M);
    cout << average << endl;
    Result result1 = Flattening(land, B, average, upper, lower);
    average++;
    Result result2 = Flattening(land, B, average, upper, lower);
    if (result1.time >= result2.time)
        cout << result2.time << " " << result2.height << endl;
    else
        cout << result1.time << " " << result1.height << endl;
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
    getUpperLowerValues(land, average, upper, lower);

    if (B < lower)
    {
        cout << average << endl;
        int tmp = lower - B;
        if (tmp > upper)
        {
            cout << "called" << endl;
            return Flattening(land, B, average - 1, upper, lower);
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
