//jai shree ram
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[3], product = 1;
    int calc,count=0;
    int* max;
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
        if(arr[i]==1)
        count++;
        
    }
    int c1=arr[0]+(arr[1]*arr[2]);
    int c2=arr[0]*(arr[1]+arr[2]);
    int c3=(arr[0]+arr[1])*arr[2];
    int c4=(arr[0]+arr[1]+arr[2]);
    int n_arr[4]={c1,c2,c3,c4};
    for (int j = 0; j < 3; j++)
    {
        if (arr[j] != 1)
        {
            product *= arr[j];
        }
        
        else if (arr[0] == 1 || arr[1] == 1 || arr[2] == 1)
        {
            product = 0;
            max = max_element(n_arr, n_arr + 4);
        }
        
    }
    if (product != 0)
    {
        cout << product; // maximum value if a,b,c not equal to 1
    }
    else
        cout <<*max;
    
    return 0;
}