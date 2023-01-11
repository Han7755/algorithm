#include <iostream>
#include <string>
using namespace std;

string iterStr(string str, int times);
int main()
{
    int n;
    cin >> n;
    string str[n];
    int times[n];

    for (int i = 0; i < n; i++)
        cin >> times[i] >> str[i];

    for (int i = 0; i < n; i++)
        cout << iterStr(str[i], times[i]) << endl;
}

string iterStr(string str, int times)
{
    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        string subStr;
        for (int j = 0; j < times; j++)
        {
            subStr.push_back(str[i]);
        }
        result += subStr;
    }
    return result;
}