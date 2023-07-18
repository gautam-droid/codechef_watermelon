#include <iostream>
#include <vector>
#include <algorithm>
#define e endl
using namespace std;

int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int  n1, i = 0;
        vector<int> v;
        while (i < 3)
        {
            cin >> n1;
            v.emplace_back(n1);
            i++;
        }
        i = 0;
        sort(v.begin(), v.end());
        if (v[0] + v[1] == v[2])
            cout << "YES"<<e;
        else
            cout << "NO"<<e;
    }
    return 0;
}