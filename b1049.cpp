#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;
    vector<int> single = vector<int>();
    vector<int> multi = vector<int>();
    cin >> N >> M;
    int *multiPrice = new int;
    int *singlePrice = new int;
    for (int i = 0; i < M; i++)
    {
        cin >> *multiPrice >> *singlePrice;
        single.push_back(*singlePrice);
        multi.push_back(*multiPrice);
    }
    delete multiPrice;
    delete singlePrice;
    sort(single.begin(), single.end());
    sort(multi.begin(), multi.end());
    int minMultiPrice = multi[0];
    int minSinglePrice = single[0];

    vector<int> results;
    int a = N / 6;
    results.push_back(minMultiPrice * a + minSinglePrice * (N % 6));
    results.push_back(minSinglePrice * N);
    N % 6 == 0 ? results.push_back(minMultiPrice * a) : results.push_back(minMultiPrice * (a + 1));
    int min = *min_element(results.begin(), results.end());
    cout << min << endl;
}