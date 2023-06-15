//            _____                    _____                    _____             _____                    _____                    _____                  
//           /\    \                  /\    \                  /\    \           /\    \                  /\    \                  /\    \                 
//          /::\    \                /::\    \                /::\____\         /::\    \                /::\    \                /::\____\                
//         /::::\    \              /::::\    \              /:::/    /         \:::\    \              /::::\    \              /::::|   |                
//        /::::::\    \            /::::::\    \            /:::/    /           \:::\    \            /::::::\    \            /:::::|   |                
//       /:::/\:::\    \          /:::/\:::\    \          /:::/    /             \:::\    \          /:::/\:::\    \          /::::::|   |                
//      /:::/  \:::\    \        /:::/__\:::\    \        /:::/    /               \:::\    \        /:::/__\:::\    \        /:::/|::|   |                
//     /:::/    \:::\    \      /::::\   \:::\    \      /:::/    /                /::::\    \      /::::\   \:::\    \      /:::/ |::|   |                
//    /:::/    / \:::\    \    /::::::\   \:::\    \    /:::/    /      _____     /::::::\    \    /::::::\   \:::\    \    /:::/  |::|___|______          
//   /:::/    /   \:::\ ___\  /:::/\:::\   \:::\    \  /:::/____/      /\    \   /:::/\:::\    \  /:::/\:::\   \:::\    \  /:::/   |::::::::\    \         
//  /:::/____/  ___\:::|    |/:::/  \:::\   \:::\____\|:::|    /      /::\____\ /:::/  \:::\____\/:::/  \:::\   \:::\____\/:::/    |:::::::::\____\        
//  \:::\    \ /\  /:::|____|\::/    \:::\  /:::/    /|:::|____\     /:::/    //:::/    \::/    /\::/    \:::\  /:::/    /\::/    / ~~~~~/:::/    /        
//   \:::\    /::\ \::/    /  \/____/ \:::\/:::/    /  \:::\    \   /:::/    //:::/    / \/____/  \/____/ \:::\/:::/    /  \/____/      /:::/    /         
//    \:::\   \:::\ \/____/            \::::::/    /    \:::\    \ /:::/    //:::/    /                    \::::::/    /               /:::/    /          
//     \:::\   \:::\____\               \::::/    /      \:::\    /:::/    //:::/    /                      \::::/    /               /:::/    /           
//      \:::\  /:::/    /               /:::/    /        \:::\__/:::/    / \::/    /                       /:::/    /               /:::/    /            
//       \:::\/:::/    /               /:::/    /          \::::::::/    /   \/____/                       /:::/    /               /:::/    /             
//        \::::::/    /               /:::/    /            \::::::/    /                                 /:::/    /               /:::/    /              
//         \::::/    /               /:::/    /              \::::/    /                                 /:::/    /               /:::/    /               
//          \::/____/                \::/    /                \::/____/                                  \::/    /                \::/    /                
//                                    \/____/                  ~~                                         \/____/                  \/____/                 
//  
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1, x2, x3, x4, y1, y2, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2;

    if (x1 == x2) {
        int side = abs(y2 - y1);
        x3 = x1 + side;
        x4 = x2 + side;
        y3 = y1;
        y4 = y2;
    }
    else if (y1 == y2) {
        int side = abs(x2 - x1);
        x3 = x1;
        x4 = x2;
        y3 = y1 + side;
        y4 = y2 + side;
    }
    else {
        int side = abs(x2 - x1);
        if (abs(y2 - y1) != side) {
            cout << -1 << endl;
            return 0;
        }
        x3 = x1;
        y3 = y2;
        x4 = x2;
        y4 = y1;
    }

    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    return 0;
}
