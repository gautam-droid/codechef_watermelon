#include <iostream>
using namespace std;

int main()
{
    int k, n, w,i=1,sum=0;
    cin >> k >> n >> w;
    while (w--)
    {
        sum+=i*k;
        i++;
    }
    // cout<<sum;
    if(n>sum)
    cout<<"0";
    else
    cout<<sum-n;
    return 0;
}