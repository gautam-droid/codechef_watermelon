#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t, n, i = 0, count1 = 0,count2=0, j = 0;
    cin >> t >> n;
    int arr[n];
    while (t--)
    {
        while (i != n)
        {
            cin >> arr[i];
            i++;
        }
        sort(arr, arr + n);
        // while (j != n)
        // {
        //     cout << arr[j]<<" ";
        //     j++;
        // }

        for (int j = 0; j < n; j += 2)
        {
            if (abs(arr[j] - arr[j + 1]) == 1)
            {
                count1++;
            }
            if ((arr[j] % 2) == (arr[j + 1] % 2))
            {
                // cout<<j;
                // cout<<arr[j]<<" "<<arr[j+1]<<" ";
                // cout<<"yaha hoon";
                count2++;
            }
        }
        if (count1 == count2 && count1==n/2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    
    return 0;
}