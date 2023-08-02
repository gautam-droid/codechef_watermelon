#include<iostream>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
     while(true)
     {
     if(n>=100)
     {
       n-=100;
       count++;  
     }   
     if(n>=20&&n<100)
     {
       n-=20;
       count++;  
     }   
     if(n>=10&&n<20)
     {
       n-=10;
       count++;  
     }   
    
     if(n>=5&&n<10)
     {
       n-=5;
       count++;  
     }   
     if(n>=1&&n<5)
     {
       n-=1;
       count++;  
     }   
    if (n==0 )
    break;
 // cout<<n<<endl;
         
     }
cout<<count;
return 0;
}
