#include <iostream>
using namespace std;
int main()
{
    int num, rem, count = 0, digits = 0,temp;
    cin >> num;
    temp=num;
    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;
        digits++;
        if (rem  == 4 || rem  == 7)
        {
            count++;
        }
    }
    if (digits == count)
    {
        cout << "YES\n";
    }
    else if (temp % 4 == 0 || temp % 7 == 0 || temp % 47==0 || temp % 74==0 || temp %44==0||temp %77==0||temp %44==0||temp %447==0||temp %474==0||temp %747==0||temp %774==0||temp %777==0||temp %444==0)
    {
        cout << "YES\t";
    }
    else
    {
        cout << "NO\n";
    }
   
   
    return 0;
}
//manzil mil hi jyegi der se hi sahi
//gumrah toh woh hai jo ghar se nikale hi nhi!!