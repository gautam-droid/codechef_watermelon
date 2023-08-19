#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int t = n;
    int arr[n];
    int i = 0, j = 0;
    int count = 0;
    while (n--)
    {
        cin >> arr[i];
        i++;
    }
    while (t--)
    {
        if (j == n)
        {
            continue;
        }
        if (arr[j] >= arr[k-1] && arr[j]!=0)
        {
            count++;
            // cout<<arr[j]<<" ";
        }
    j++;
    }
    // cout<<endl;
    // cout<<arr[k-1]<<endl;
    cout << count<<endl;
    return 0;
}