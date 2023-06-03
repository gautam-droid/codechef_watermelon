#include <iostream>
using namespace std;
int main()
{
  int n, i = 0;
  cin >> n;
  string l_word;
  while (i < n)
  {
    i++;

    cin >> l_word;
    int len = l_word.length();
    if (len > 10)
    {
      cout << l_word[0] << (len - 2) << l_word[len - 1] << endl;
    }
    else
      cout << l_word << endl;
  }
  return 0;
}
