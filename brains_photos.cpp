#include <iostream>
using namespace std;

int main()
{
    int n, m, count = 0;
    cin >> n >> m;
    string color[n * m];
    for (int i = 0; i < n * m; i++)
    {
        cin >> color[i];
    }
    for (int j = 0; j < n * m; j++)
    {
        if (color[j] == "W" || color[j] == "B" || color[j] == "G")
        {
            count++;
        }
    }
    if (count == n * m)
        cout << "#Black&White" << endl;
    else
        cout << "#Color" << endl;
    return 0;
}