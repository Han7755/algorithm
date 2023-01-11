#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> splitStr(string str, char delimiter);

int main()
{
    string input;
    getline(cin, input);
    cout << splitStr(input, ' ').size();
}

vector<string> splitStr(string str, char delimiter)
{
    string temp;
    vector<string> result;
    stringstream ss = stringstream(str);
    while (getline(ss, temp, delimiter))
    {
        if (temp == "")
            continue;
        result.push_back(temp);
    }
    return result;
}