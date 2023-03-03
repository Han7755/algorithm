#include <iostream>
using namespace std;

int main()
{
    long n;
    short l;
    cin >> n >> l;
    for (int i = l; i < 101; i++)
    {
        int temp = n - (i * (i + 1) / 2);
        int x;
        if (temp % i == 0)
        {
            x = temp / i;
            if (x >= -1)
            {
                for (int j = 1; j <= i; j++)
                {
                    cout << x + j << " ";
                }
                return 0;
            }
        }
    }
    cout << "-1" << endl;
}