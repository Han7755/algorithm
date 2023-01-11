#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main()
{
    array<int, 4> vals;
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    vals[0] = x;
    vals[1] = y;
    vals[2] = w - x;
    vals[3] = h - y;
    cout << *min_element(vals.begin(), vals.end()) << endl;
}