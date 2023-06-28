#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    string s;
    cin >> s;
    int len = s.length();
    int i = 0;
    for (int i = 0; i < len; i++)
    {
        s[i] = toupper(s[i]);
    }
    while (true)
    {
        if (len - 1 == i)
            break;

        if (s[i] == s[i + 1])
            count++;
        i++;
    }
    cout << count;
    return 0;
}