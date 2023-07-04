#include <iostream>
#include <string>
#include <set>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    cin>> str;
    string letters = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < str.length(); i++)
    {
        str[i] = tolower(str[i]);
    }
    set<char> myset(str.begin(), str.end());
    // for(auto it:myset)
    // {
    //     cout<<it;
    // }
    if (letters == string(myset.begin(), myset.end()))
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}