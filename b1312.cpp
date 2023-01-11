#include <iostream>
using namespace std;

int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    int temp = a;
    int result;
    for (int i = 0; i < n; i++)
    {
        temp = (temp % b) * 10;
        result = temp / b;
    }
    cout << result << endl;
}