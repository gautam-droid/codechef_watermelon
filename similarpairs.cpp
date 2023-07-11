#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, i = 0, count_odd = 0, count_even = 0;
        cin >> n;
        int arr[n];

        while (i != n)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
                count_even++;
            else
                count_odd++;
            i++;
        }

        if (count_odd % 2 == 0 && count_even % 2 == 0)
            cout << "YES" << endl;
        else
        {
            sort(arr, arr + n);
            bool possible = false;
            for (int j = 0; j < n - 1; j++)
            {
                if (abs(arr[j] - arr[j + 1]) == 1)
                {
                    possible = true;
                    break;
                }
            }
            if (possible)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
