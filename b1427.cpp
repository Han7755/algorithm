#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string number;
    cin >> number;

    vector<char> v(number.begin(), number.end());
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
}