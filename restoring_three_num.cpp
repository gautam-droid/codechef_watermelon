//radhe radhe
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int arr[4];
    int i = 0, a = 0, b = 0, c = 0;
    // int j = 0;
    while (i != 4)
    {
        cin >> arr[i];
        i++;
    }
    sort(arr, arr + 4);
    //  while (j != 4)
    //     {
    //         cout<< arr[j];
    //         j++;
    //     }

    for (int i = 0; i < 1; i++)
    {
        a = arr[3] - arr[i];
        b = arr[3] - arr[i+1];
        c = arr[3] - arr[i+2];
    }
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}