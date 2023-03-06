#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int result = 665;
    int cnt = 0;
    int tmp = 0;
    while (cnt != n)
    {
        result++;
        tmp = result;
        while (tmp != 0)
        {
            if (tmp % 1000 == 666)
            {
                cnt++;
                break;
            }
            tmp /= 10;
        }
    }
    cout << result << endl;
}