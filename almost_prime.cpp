#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int n, inc = 2;
    int count = 0;
    cin >> n;
    int t = n;
    for (int i = 2; i <= n; i++)
    {
        int k = 2;
        set<int> s;
        t = i;
        while (t != 1)
        {

            if (t % k == 0)
            {
                t /= k;
                s.emplace(k);
            }
            else
                k++;
        }
        if (s.size() == 2)
        {
            count++;
        }
        // cout<<i<<endl;
        // for (auto it : s)
        // {
        //     cout << it << endl;
        // }
        // cout << "___________________________________________" << endl;
    }
    cout << count;
    return 0;
}