#include <iostream>
using namespace std;
int main()
{
    int n;double dec=0.0;
    cin >> n;
    int store=n;
    double sum=0.0;
    while (n--)
    {
     cin>>dec;
     sum+=dec/100;
    }
    cout<<(sum/store)*100;
    return 0;
}