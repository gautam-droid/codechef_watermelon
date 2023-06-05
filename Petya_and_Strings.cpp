#include <iostream>
using namespace std;

int main()
{
    string w1, w2;
    int count;
    cin >> w1;
    cin >> w2;
    for (int i = 0; i < w1.length(); i++)
    {
        w1[i] = tolower(w1[i]);
        w2[i] = tolower(w2[i]);
    }
    if (w1 < w2)
        count = -1;
    else if (w1 > w2)
        count = 1;
    else if (w1 == w2)
        count = 0;
    cout << count;
    return 0;
}