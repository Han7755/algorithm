#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    short arr[n]{0};
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sum = sum / n;
    sum = sum < 0 ? floor(sum + 0.5) : round(sum);
    sum = sum == 0 ? 0 : sum;

    sort(arr, arr + n);
    cout << sum << endl;        // »ê¼ú Æò±Õ
    cout << arr[n / 2] << endl; // Áß¾Ó°ª
    int maxCount = 0;
    map<int, int> frequency;
    vector<int> modes;
    for (int i = 0; i < n; i++)
        frequency[arr[i]]++;
    for (auto i : frequency)
    {
        if (i.second > maxCount)
        {
            modes.clear();
            modes.emplace_back(i.first);
            maxCount = i.second;
        }
        else if (i.second == maxCount)
        {
            modes.emplace_back(i.first);
        }
    }
    sort(modes.begin(), modes.end());
    modes.size() == 1 ? cout << modes[0] << endl : cout << modes[1] << endl; // ÃÖºó°ª
    cout << arr[n - 1] - arr[0] << endl;                                     // ¹üÀ§
}
