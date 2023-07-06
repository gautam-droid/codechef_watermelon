#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count, extra_count = 0;
    int inp[n];
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> inp[j];
            if (inp[j] == 1)
                count++;
        }
        if (count >= 2)
        extra_count++;
    }
    cout << extra_count;
    return 0;
}