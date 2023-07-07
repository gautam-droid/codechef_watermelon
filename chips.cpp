#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int chips = m % (n * (n + 1) / 2);  

    for (int i = 1; i <= n; i++)
    {
        if (chips < i)
            break;
        chips -= i;
    }

    cout << chips << endl;

    return 0;
}
