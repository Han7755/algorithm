#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool isvowel(char ch) { return (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') || (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'); }

int main()
{
    vector<int> numbers;

    while (true)
    {
        string temp;
        int cnt = 0;
        getline(cin, temp);
        if (temp == "#")
            break;
        for (int i = 0; i < temp.size(); i++)
        {
            if (isvowel(temp[i]))
                cnt++;
        }
        numbers.push_back(cnt);
    }
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << endl;
    }
}