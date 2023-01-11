#include <iostream>
using namespace std;

int gcd(int x, int y);
int main()
{
    int x, y;
    cin >> x >> y;
    int GCD = gcd(x, y);
    int LCM = x * y / gcd(x, y);
    cout << GCD << endl;
    cout << LCM << endl;
}
int gcd(int x, int y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}