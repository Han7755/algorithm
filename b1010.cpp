#include <iostream>
#include <vector>
#include <string>
using namespace std;

int Combination(int n, int r)
{
    int result = 1;
    for (int i = 0; i < r; i++)
    {
        result *= n - i;
        result /= i + 1;
    }
    return result;
}

int main()
{
    int times = 0;
    int a, b;
    vector<int> result;
    cin >> times;
    for (int i = 0; i < times; i++)
    {
        cin >> a >> b;
        result.push_back(Combination(b, a));
    }

    for (int i = 0; i < times; i++)
    {
        cout << result[i] << endl;
    }
}