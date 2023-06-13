#include <iostream>
#include<set>
using namespace std;
int main()
{
    int n, p, a,el1,el2;
    cin>> n>>p;
    set <int> st;
    for (int i=0;i<p;i++)
    {
        cin>>el1;
        st.emplace(el1);
    }
    cin >> a;
    for(int j=0;j<a;j++)
    {
        cin>>el2;
        st.emplace(el2);
    }
    // for (auto it:st)
    // {
    //     cout<<it<<endl;
    // }
    
    
    
    // cout<<st.size()<<"\n";
    // cout<<*(st.rbegin())<<"\n";
    if(st.size()==n && (*(st.rbegin())))
    {
        cout<<"I become the guy."<<endl;
    }
    else
    cout<<"Oh, my keyboard!"<<endl;
    
    return 0;
}