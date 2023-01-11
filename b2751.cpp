#include <iostream>
#include <vector>
using namespace std;

void mergeSort(vector<int> &a, int left, int right);
int main()
{
    int n;
    cin >> n;
    vector<int> inputs;
    inputs.reserve(n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        inputs.emplace_back(temp);
    }
    mergeSort(inputs, 0, inputs.size() - 1);
    for (int i : inputs)
    {
        cout << i << "\n";
    }
}

void merge(vector<int> &inputs, int left, int mid, int right)
{
    int leftIndex = left;
    int rightIndex = mid + 1;
    int sortedIndex = 0;
    int *output = new int[right - left + 1];
    while (leftIndex <= mid && rightIndex <= right)
        inputs[leftIndex] <= inputs[rightIndex] ? output[sortedIndex++] = inputs[leftIndex++] : output[sortedIndex++] = inputs[rightIndex++];

    if (leftIndex > mid)
        for (int i = rightIndex; i <= right; i++)
            output[sortedIndex++] = inputs[i];

    else
        for (int i = leftIndex; i <= mid; i++)
            output[sortedIndex++] = inputs[i];
    for (int i = 0; i < (right - left + 1); i++)
        inputs[i + left] = output[i];
    delete[] output;
}
void mergeSort(vector<int> &inputs, int left, int right)
{
    if (left < right)
    {
        int *mid = new int;
        *mid = (left + right) / 2;
        mergeSort(inputs, left, *mid);
        mergeSort(inputs, *mid + 1, right);
        merge(inputs, left, *mid, right);
        delete mid;
    }
}