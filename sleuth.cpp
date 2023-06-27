#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    for (int i = 0; i <str.length(); i++)
    {
        str[i] = tolower(str[i]);
    }
    // cout<<str;
    int store=str.length()-2;
    if(str[store]=='a'||str[store]=='e'||str[store]=='i'||str[store]=='o'||str[store]=='u'||str[store]=='y')
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}