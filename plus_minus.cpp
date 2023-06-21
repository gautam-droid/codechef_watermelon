#include <iostream>
using namespace std;
int main()
{
    int t, a = 1, b = 1, c = 1;
    cin >> t;
    int eq1, eq2;

    while (--t)
    {
        cin >> a >> b >> c;
        if (a < 1 || b > 9 || (c < -8 || c > 18)||t>162)
            return 0;
        eq1 = a + b - c;
        eq2 = a - b - c;
        if (eq1 == 0)
            cout << "+";
        else
            cout << "-";
    }
    return 0;
}