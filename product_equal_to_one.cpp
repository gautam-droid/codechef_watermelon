#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n, inp, count = 0, calc = 0, product = 1;
    cin >> n;
    vector<int> v;
    while (n--)
    {
        cin >> inp;
        v.emplace_back(inp);
    }
    for (auto it = v.begin(); it != v.end(); it++)
    {
        if (*it < -1)
        {
            count = abs(*it) - 1;
            calc += count;
            *it = -1;
        }
        else if (*it > 1)
        {
            count = *it - 1;
            calc += count;
            *it = 1;
        }
        else if (*it == 0)
        {
            calc += 1;
            *it = 1;
        }
        product *= *it;
    }

    if (product < 0)
    {
        calc += 2;
    }

    cout << calc << endl;

    return 0;
}
