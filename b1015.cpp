#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <array>
using namespace std;

int main()
{
    int sizeofArr = 0;
    cin >> sizeofArr;
    vector<int> aArr;
    vector<int> numArr;
    vector<int> resultArr;
    for (int i = 0; i < sizeofArr; i++)
    {
        int input;
        cin >> input;
        aArr.push_back(input);
        numArr.push_back(input);
    }

    sort(aArr.begin(), aArr.end());

    for (int i = 0; i < numArr.size(); i++)
    {
        int a = find(aArr.begin(), aArr.end(), numArr[i]) - aArr.begin();
    Again:
        if (find(resultArr.begin(), resultArr.end(), a) == resultArr.end())
            resultArr.push_back(a);
        else
        {
            a = find(aArr.begin() + a + 1, aArr.end(), numArr[i]) - aArr.begin();
            if (a == aArr.size())
                continue;
            goto Again;
        }
    }
    for (int i = 0; i < resultArr.size(); i++)
    {
        cout << resultArr[i] << " ";
    }
}
