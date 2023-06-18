//end moment me streak banana me bhi alag hi maza hai hue hue hue
//inspired by dogesh (our hero)
//hue hue hue

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n, m,store;
    cin >> n >> m;
    int len = n.length();
    for (int i = 0; i < len; i++)
    {
        if (n[i] == m[i])
        {
         store=store+"0";
        }
        else
        store=store+"1";
    }
    cout<<store;
    return 0;
}