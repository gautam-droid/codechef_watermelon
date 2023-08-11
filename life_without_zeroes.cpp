#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main()
{
    ll a,b;
    vector<int> v;
    cin >> a >> b;
    ll c=a+b;
    string str_tot=to_string(c);
    // cout<<str_tot<<endl;
    string str1=to_string(a);
    string str2=to_string(b);
    int max_len=max((str1.length(),str2.length()),str_tot.length());
    // cout<<max_len;
    for(int i=0;i<max_len;i++)
    {
        if(str1[i]=='0')
        {
            str1.erase(i,1);
        i-=1;
        }
        if(str2[i]=='0')
        {
            str2.erase(i,1);
        i-=1;
        }
        if(str_tot[i]=='0')
        {
           str_tot.erase(i,1);
        i-=1;
        }
    }
    // cout<<str1<<endl;
    // cout<<str2<<endl;
    // cout<<str_tot<<endl;
    int check=stoi(str1)+stoi(str2);
    bool value=(check==stoi(str_tot)?true:false);
    cout<<(value==true?"YES":"NO");
    return 0;
}