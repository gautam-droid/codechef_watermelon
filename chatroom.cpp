#include <iostream>
using namespace std;

int main()
{
    string msg;
    cin >> msg;

    string text = "hello";
    int k = 0;

    for (int i = 0; i < msg.length(); i++)
    {
        if (text[k] == msg[i])
        {
            k++;
        }

        if (k == text.length())
        {
            break;
        }
    }
    if (k == text.length())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
