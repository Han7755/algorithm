#include <iostream>
#include <string>
using namespace std;

int main()
{
    string strX;
    cin >> strX;
    int cnt = 0;
    while (strX.length() != 1)
    {
        int sum = 0;
        for (int i = 0; i < strX.length(); i++)
        {
            sum += strX[i] - '0';
        }
        strX = to_string(sum);
        cnt++;
    }
    int result = strX[0] - '0';
    cout << cnt << endl;
    if ((result != 0) && (result % 3 == 0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}