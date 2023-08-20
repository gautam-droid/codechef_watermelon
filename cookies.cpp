#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int i=0,j=0;
    int sum=0;
    int t=n;
    int count=0;
    while(n--)
    {
        cin>>arr[i];
        i++;
        sum+=arr[i];
    }
    while(t--)
    {
      if((sum-arr[j])==0)
      {
         count++;
      }
    j++;
    }
    cout<<count;
    return 0;
}