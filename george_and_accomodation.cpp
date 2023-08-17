#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int count=0;
    while(t--)
    {
        int p,q;
        cin>>p>>q;
        int rem=q-p;
        if(rem>=2)
        {
            count++;
        }
    
    }
    cout<<count;
    return 0;
}