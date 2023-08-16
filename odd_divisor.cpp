#include <iostream>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    int flag;
    while (t--)
    {
        ll n;
        cin >> n;
        flag = 0;
        if (n % 2 != 0)
        {
            flag = 1;
        }
        else
        {
            for (ll i = 2; i <= n / 2; i++)
            {
                if (n % i == 0)
                {
                    n /= i;
                    if (i % 2 != 0)
                    {
                        flag = 1;
                        break;
                    }
                }
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}