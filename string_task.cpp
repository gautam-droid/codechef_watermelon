#include <iostream>
using namespace std;

int main()
{
    string word, n_word;
    cin >> word;
    for (int i = 0; i < word.length(); i++)
    {
        word[i] = tolower(word[i]);
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'y')
        {
            continue;
        }
        else
        {
            n_word = n_word + "." + word[i];
        }
    }
    cout << n_word << endl;
    return 0;
}