#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string s, t;
    cin >> s;
    cin >> t;
    reverse(s.begin(),s.end());
    // cout<<s<<endl;
    if (s== t)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}