#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    int year;
    cin >> year;
    int count = 0;
    while (true)
    {
        year += 1;
        string n_year = to_string(year);
        set<char> ch(n_year.begin(), n_year.end());
        if (ch.size() == 4)
        {
            break;
        }
    }
    cout<<year;
    return 0;
}