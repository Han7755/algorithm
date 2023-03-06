#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cin >> k >> n;
    vector<int> lengths(k);

    for (int i = 0; i < k; i++)
        cin >> lengths[i];
    long long maxLength = *max_element(lengths.begin(), lengths.end());
    long long minLength = 1;
    int result = 1;
    while (minLength <= maxLength)
    {

        long long mid = (minLength + maxLength) / 2;
        int cnt = 0;
        for (int i : lengths)
            cnt += i / mid;

        if (cnt >= n)
        {
            minLength = mid + 1;
            if (mid > result)
                result = mid;
        }
        else
            maxLength = mid - 1;
    }
    cout << result;
}