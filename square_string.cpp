#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int len = str.length();
        int j = len / 2;
        int count = 0;
        if (len%2!=0)
            cout << "no" << endl;
        else
        {
            for (int i = 0; i < len / 2; i++)
            {
                if (str[i] == str[j])
                {
                    count++;
                }
                j++;
            }
            if (count == len / 2)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
    }
    return 0;
}