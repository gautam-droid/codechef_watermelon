#include <iostream>
using namespace std;
int main()
{
    int chest = 0, biceps = 0, back = 0, n, i = 1, a;
    cin >> n;
    while (n--)
    {
        cin >> a;
        ((i == 1) ? chest += a : (((i == 2) ? biceps += a : back += a)));
        i++;
        (i == 4) ? i = 1 : false;
    }
    cout<<((chest>=biceps)?((chest>=back)?"chest":"back"):((biceps>=back)?"biceps":"back"));   
    return 0;
}