//RADHE RADHE
//JAI SHREE RAM
/*

｜　　　　The rest ended with surprising swiftness.
　＼＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿／
　　　　　　　　　　　　　　　　Ｏ
　　　　　　　　　　　　　　　　　　o
　　　　　　　　　　　　　　　　　　　　。
　　　　　　　　　　　　　　　　　　　　　　　＿＿_
　　　　　　　　　　　　　　　　　　　　　 　 /rニｰ 、` ｰ、
　　　　　　　　　　 　 　 　 　 　 　 　 /´/'´　_,. l,.....ヽ 　ヽ
　　　　　　　　　　　 　 　 　 　 　 　 r''ﾍ_ _　,.r'　l　　lヽ　 .i
　　　　　　　 　 　 　 　 　 　 　 ,r '´l　_.　リ　! 　　　/ l.〉　l,r
　　　　　　　　　　　　　　　　　 l 　 ､i(._`　 　 `ｰ-‐'ヽ./ 　 l`
　　　　　　　　　　　　　　　,r::'::::l 　 !ヽ_｀ヽ_,..､　　 　 '⌒r_'
　　　 r‐ ､　　 　 　 ＿　　i:::::;::;_;l-'´｀ ‐￣._　l　 　_,､_'ノ-　i､._
　 　 l　 　 `-､..-i' ´　　ヽ_,.ゞ- 、　　　　　 r ' ´￣ 　 　 　 /:::::::::｀ヽ
　　　!　　　　　,..rー､　 　 ヽ.　　ヽ 　 　 ./ 　　　　＿,...-::'´:::::::::::::_;/
　　　 ヽ、 　 / 　 　 ,ヽ.　 　 i.　　 ヽ　　　-r:::::'::::´:::::::::::;::::-‐::':´::::::)
　　　　 　`‐/ ､__　./ヽ,入_,ノ　　 　 l　 ,r'´　｀ ｰ ::::_::::::::::::::_;:::- ' ´
　　　　 ＿,/ 　 　 /.　　ヽ_　　 _,.. -ﾍ-'　　　　　　　　￣
　　r' ´　　　　　　ヽ　 　 　 ￣
　　ヽ、　　　　　　_ﾉ



*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    string str;
    int value = 0;
    cin >> t;
    int n=0;
    for(int i=0;i<t;i++)
    {
        cin >> str;
        if (str == "X++")
        {
          n++;
        }
        else if (str == "++X")
        {
            ++n;
        }
        else if (str == "X--")
        {
             n--;
        }
        else if (str == "--X")
        {
            --n;
        }
        
        
    }
cout<<n;
    return 0;
}