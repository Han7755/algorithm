#include <iostream>
#include <vector>
using namespace std;

vector<int> FindPrimeNumber(int start, int end);
int main()
{
    int start, end;
    cin >> start >> end;
    for (int i : FindPrimeNumber(start, end))
        cout << i << '\n';
}

vector<int> FindPrimeNumber(int start, int end)
{
    vector<bool> primeNumbers(end + 1, true);
    primeNumbers[0] = primeNumbers[1] = false;
    for (int i = 2; i * i <= end; i++)
        if (primeNumbers[i])
            for (int j = i * i; j <= end; j += i)
                primeNumbers[j] = false;

    vector<int> result;
    for (int i = max(start, 2); i <= end; i++)
        if (primeNumbers[i])
            result.emplace_back(i);

    return result;
}