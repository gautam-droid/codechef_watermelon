#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c_a = 0, c_b = 0;
    cin >> n;

    while (n--)
    {
        cin >> a >> b;

        if (a > b)
        {
            c_a++;
        }

        else if (b > a)
        {
            c_b++;
        }
    }
if(c_a>c_b)
cout<<"Mishka\n";
else if(c_a<c_b)
cout<<"Chris\n";
else
cout<<"Friendship is magic!^^\n";
    return 0;
}