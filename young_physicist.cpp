#include <iostream>
using namespace std;

int main()
{
    int n, sum1 = 0, sum2 = 0, sum3 = 0;
    cin >> n;
    int arr[3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cin >> arr[j];
            if (arr[j] < -100 || arr[j] > 100)
            {
                cout << "NO\n";
                return 0;
            }
            if (j == 0)
                sum1 = sum1 + arr[j];

            else if (j == 1)
                sum2 = sum2 + arr[j];

            else if (j == 3)
                sum3 = sum3 + arr[j];
        }
    }
    if (sum1 == 0 && sum2==0 && sum3==0)
    {

        cout << "YES\n";
    }
    else
        cout << "NO\n";

    return 0;
}
