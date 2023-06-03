#include <iostream>
using namespace std;
int main()
{
    int w;
    cin >> w;

    if (w == 2)
    {
        cout << "NO";
    }
    else if (w % 2 == 0)
    {
        for (int i = 1; i <= w / 2; i++)
        {
            if (i % 2 == 0 && (w - i) % 2 == 0)
            {
                cout << "YES";
                break;
            }
        }
    }

    else
    {
        cout << "NO";
    }
    return 0;
}