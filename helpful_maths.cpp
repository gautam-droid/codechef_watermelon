#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string calc;
    cin >> calc;
    string temp;
    int len = calc.length();
    for (int i = 0; i < len; i++)
    {
        if (calc[i] != '+')
        {
            temp += calc[i];
        }
    }
    sort(temp.begin(), temp.end());//good concept
    for (int i = 0; i < temp.length(); i++)
    {
        cout << temp[i];
        if (i != temp.length()-1)//good concept
        {
            cout << "+";
        }
    }

    return 0;
}