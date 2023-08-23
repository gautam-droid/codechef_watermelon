#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n != s.length())
        {
            return 0;
        }
        int count = 1,maxi = 1;

        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                count++;
            }
            else
            {
                maxi=max(count,maxi);
                count = 1;
            }
        }
        maxi=max(count,maxi);
        cout <<maxi+1<< endl;
    }
    return 0;
}