#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string inputStr = "";
    cin >> inputStr;
    vector<string> output = vector<string>();
    if (inputStr.length() == 3)
    {
        cout << inputStr << endl;
        exit(0);
    }

    for (int i = 1; i < inputStr.length() - 2; i++)
    {

        for (int j = 1; (i + j) < inputStr.length(); j++)
        {
            string subString1 = inputStr.substr(0, i);
            string subString2 = inputStr.substr(i, j);
            int subStrSize = inputStr.length() - (subString1.length() + subString2.length());
            int subStrStart = subString1.length() + subString2.length();
            string subString3 = inputStr.substr(subStrStart, subStrSize);
            reverse(subString1.begin(), subString1.end());
            reverse(subString2.begin(), subString2.end());
            reverse(subString3.begin(), subString3.end());
            string result = subString1 + subString2 + subString3;
            output.push_back(result);
        }
    }
    sort(output.begin(), output.end());
    cout << output[0] << endl;
}