//thak gya hu vmro
//test cases pass krwate krwate

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string text1, text2;
    cin >> text1 >> text2;
    int len1 = text1.length();
    int len2 = text2.length();
    int temp1 = -1;
    int temp2 = -1;
    if (len1 == len2)
    {
        for (int i = 0; i < len1; i++)
        {
            if (text1[i] != text2[i])
            {
                if (temp1 == -1)
                {
                    temp1 = i;
                }
                else
                {
                    temp2 = i;
                }
            }
        }
    }

    swap(text1[temp1], text1[temp2]);
    if (text1 == text2)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
