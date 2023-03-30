#include <iostream>
using namespace std;

double factorial(int input)
{
    double ans = 1;
    for (int i = 2; i <= input; i++)
        ans *= i;
    return ans;
}
int main()
{
    double n, k;
    cin >> n >> k;
    cout << factorial(n) / (factorial(k) * factorial(n - k)) << endl;
}