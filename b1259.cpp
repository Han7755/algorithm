#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> inputs;
    bool result;
    while (true)
    {
        string input;
        cin >> input;
        if (input == "0")
            break;
        inputs.push_back(input);
    }

    for (string a : inputs)
    {
        string temp = string(a);
        reverse(a.begin(), a.end());
        temp == a ? cout << "yes" : cout << "no";
        cout << endl;
    }
}