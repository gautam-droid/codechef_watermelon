#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    int rem=x%5;
    int steps=x/5;
    if(rem==0)
    {
        cout<<steps<<endl;
        return 0;
    }
    else if(rem%2==0||rem%3==0||rem%4==0)
    {
        steps+=1;
    }
    else
    {
        steps+=1;
    }
    cout<<steps<<endl;
    return 0;
}