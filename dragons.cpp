#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, s, x, y, i = 0, count = 0;
    cin >> s;
    cin >> n;
    int t=n;
    // cout<<t;
    vector<pair<int, int>> v;
    while (n--)
    {
        cin >> x;
        cin >> y;
        v.emplace_back(x, y);
        i++;
    }
    sort(v.begin(), v.end());
    for (auto it : v)
    {
        // cout<<"-----------------------------"<<endl;
        // cout<<it.first<<" "<<it.second<<endl;
        if (it.first < s)
        {
            s += it.second;
            count++;
        }
    }
    // cout<<"count="<<count<<endl;
    if (count == t)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}