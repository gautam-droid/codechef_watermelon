//RADHE RADHE

#include <iostream>
using namespace std;
int main()
{
    int t, n, j, count, store;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int arr[n];
        count=0;
        store=0;
        for (int j = 0; j < n; j++)
        {   
            cin >> arr[j];
        }
        for(int k=0;k<n;k++)
        {
            if (arr[k] == 0)
            {
                count++;
            }
            else
            {
                store = max(store,count);
                count = 0;
                
            }
        }

     cout << max(store,count) << endl;
    }
    return 0;
}