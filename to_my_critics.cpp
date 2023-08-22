#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        vector <int> v;
        int a;
        for (int i = 0; i <= 2; i++)
        {
            cin >>a;
            v.emplace_back(a);
        // }
        // for(auto it:v)
        // {
        //     cout<<it<<" ";
        // }
        cout<<endl;
        sort(v.begin(),v.end());
        if((v[0]+v[1])>=10||(v[1]+v[2])>=10||(v[0]+v[3])>=10)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

    return 0;
}