#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string t;
    getline(cin, t);
    reverse(t.begin(), t.end());
    if (s == t)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}