#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<vector<int>> inputs;
    int x, y, z;
    while (true)
    {
        cin >> x >> y >> z;
        if (x == 0 || y == 0 || z == 0)
            break;
        inputs.push_back({x, y, z});
    }
    for (vector<int> i : inputs)
    {
        sort(i.begin(), i.end());
        bool result = i[0] * i[0] + i[1] * i[1] == i[2] * i[2];
        result ? cout << "right" << endl : cout << "wrong" << endl;
    }
}