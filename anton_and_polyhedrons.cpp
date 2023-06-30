#include <iostream>
using namespace std;

int main()
{
    int n, i = 0, sum = 0;
    cin >> n;
    string s;
    while (true)
    {
        if (i == n)
            break;
        cin >> s;
        if (s == "Icosahedron")
            sum += 20;
        else if (s == "Cube")
            sum += 6;

        else if (s == "Octahedron")
            sum += 8;
        else if (s == "Tetrahedron")
            sum += 4;
        else if (s == "Dodecahedron")
            sum += 12;
        i++;
    }
    cout << sum;

    return 0;
}