#include <iostream>
using namespace std;
int main()
{
    int t, n, j, count;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        while (true)
        {
            if (arr[j] == 0)
            {
                count++;
            }
            else
                count = 0;
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr[i] << endl;
        // }

        cout << count << endl;
    }
    return 0;
}