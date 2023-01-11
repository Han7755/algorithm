#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    const int arrSize = 26;
    string input;
    cin >> input;
    int *arr = new int[arrSize]{0};
    transform(input.begin(), input.end(), input.begin(), ::toupper);
    char resultChar = '?';
    int size = input.size();
    for (int i = 0; i < size; i++)
    {
        int index = input[i] - 65;
        (arr[index])++;
    }
    int largest = -1;
    int largestIndex = -1;
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            largestIndex = i;
        }
        else if (arr[i] == largest)
        {
            largestIndex = -1;
        }
    }

    delete[] arr;
    if (largestIndex != -1)
        resultChar = largestIndex + 65;
    cout << resultChar << endl;
}