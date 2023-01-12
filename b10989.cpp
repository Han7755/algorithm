#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    const int arrSize = 10001;
    int n;
    cin >> n;
    int input[arrSize]{0};
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        input[temp]++;
    }
    for (int i = 0; i < arrSize; i++)
        for (int j = input[i]; j > 0; j--)
        {
            cout << i << "\n";
        }
}
