#include <iostream>
#include <string>
#include <vector>
using namespace std;

class BigInt
{
    vector<int> value;

public:
    BigInt(vector<int> value)
    {
        this->value = value;
    }

    BigInt(string value)
    {
        for (int i = 0; i < value.size(); i++)
            this->value[i] = value[i];
    }

    BigInt(int value)
    {
        string a = to_string(value);
        for (int i = 0; i < a.size(); i++)
            this->value[i] = a[i];
    }
};