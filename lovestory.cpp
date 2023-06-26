#include <iostream>
using namespace std;

int main()
{
    int t, count;
    string s;
    string s2 = "codeforces";
    cin >> t;
    while (t--)
    {
        cin >> s;
        count=0;
        if(s.length()!=10)
        return 0;
        for (int i = 0; i < 10; i++)
        {
            if (s[i] != s2[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}