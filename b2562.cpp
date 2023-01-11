#include <iostream>
using namespace std;

int main()
{
    int arr[9];

    for (int i = 0; i < 9; i++)
        cin >> arr[i];

    int biggest = arr[0];
    int biggestIdx = 0;
    for (int i = 1; i < 9; i++)
    {
        if (arr[i] > biggest)
        {
            biggest = arr[i];
            biggestIdx = i;
        }
    }
    cout << biggest << endl
         << biggestIdx + 1 << endl;
}