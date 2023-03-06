#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int req, amount;
    cin >> amount >> req;
    vector<int> lengths(amount);

    for (int i = 0; i < amount; i++)
        cin >> lengths[i];
    if (lengths.empty())
        return 0;
    int maxLength = *max_element(lengths.begin(), lengths.end());
    for (int i = maxLength; i > 0; i--)
    {
        int cnt = 0;
        for (int j : lengths)
        {
            cnt += j / i;
            if (cnt >= req)
                break;
        }

        if (cnt == req)
        {
            cout << i;
            break;
        }
    }
}