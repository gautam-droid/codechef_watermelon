#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int t = n;
    if (n == m)
    {
        cout << n;
        return 0;
    }
    else if (n < m)
    {
        cout << "-1";
        return 0;
    }
    vector<int> v;
    while (true)
    {
        if (n != 0)
        {
            if (n % 2 == 0)
            {
                n -= 2;
                v.emplace_back(2);
            }
            else
            {
                n -= 1;
                v.emplace_back(1);
            }
        }
        else
            break;
    }
    sort(v.begin(), v.end());
    //  for (auto it : v)
    // {
    //     cout << it;
    // }
    int size = v.size();
    for (auto it = v.begin(); it != v.end(); it++)
    {

        if (v.size() % m != 0)
        {

            if (*it == 2)
            {

                v.erase(it);
                v.insert(v.begin(), 2, 1);
                break;
            }
        }
    }
    // if (v.size() == t - 1 ||  v[v.size()-1]==2)
    // {
    //     v.pop_back();
    //     v.insert(v.begin(), 2, 1);
    //     // cout<<"entered";
    // }

    // for (auto it : v)
    // {
    //     cout << it;
    // }
    if (v.size() % m == 0)
        cout << v.size();
    else
    {
        int remaining = m - (v.size() % m);
        cout << v.size() + remaining;
    }
    return 0;
}