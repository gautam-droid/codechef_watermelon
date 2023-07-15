#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    int n, i = 0, count = 0, store = 0;
    cin >> n;
    string s;
    getline(cin.ignore(), s);
    if (n != s.length())
        return 0;
    set<char> st(s.begin(), s.end());
    if (s.length() > 2 && st.size() == 1)
        cout << "-1";
    else
        cout << (n - st.size());
    return 0;
}