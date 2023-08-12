#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> v;
        int n;
        cin >> n;
        int a;
        while(n--)
        {
            cin >> a;
            v.emplace_back(a);
        }

        sort(v.begin(), v.end());
        int count = 1;

        for (int i = 0; i < v.size() - 1; i++)
        {
            if (v[i] == v[i + 1])
            {
                count++;
                if (count >= 3)
                {
                    cout << v[i] << endl;
                    break;
                }
            }
            else
            {
                count = 1;
            }
        }

        if (count < 3)
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}
