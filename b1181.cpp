#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(const string &a, const string &b);
int main()
{
    vector<string> input;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string tmp;
        cin >> tmp;
        input.push_back(tmp);
    }

    sort(input.begin(), input.end(), compare);
    input.erase(unique(input.begin(), input.end()), input.end());
    for (const string a : input)
        cout << a << endl;
}

bool compare(const string &a, const string &b)
{
    return a.length() != b.length() ? a.length() < b.length() : a < b;
}