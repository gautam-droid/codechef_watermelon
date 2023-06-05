#include <iostream>
using namespace std;

int main()
{
    int n, m; // horizontal sticks and vertical sticks
    cin >> n >> m;
    int sticks = n + m;
    int dots = n * m;
    int turn = 0;
    if((n<1||n>100||m<1||m>100))
    return 0;
    while (dots > 0)
    {
        if (sticks >= 2)
        {
            if (turn == 0)
            {
                turn = 1;
                sticks = sticks - 2;
                n = n - 1;
                m = m - 1;
                dots = n * m;
            }
            else if (turn == 1)
            {
                turn = 0;
                sticks = sticks - 2;
                n = n - 1;
                m = m - 1;
                dots = n * m;
            }
        }
    }

    if (turn == 1)
        cout << "Akshat" << endl;
    else
        cout << "Malvaika" << endl;
    return 0;
}