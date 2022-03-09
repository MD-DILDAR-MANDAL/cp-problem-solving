/*2 players alice & bob paly a game. Num n on board &
 *change num to (n - x) only if (0 < x < n and n % x =0 ) 
 */
#include <bits/stdc++.h>
using namespace std;

int help(int n){
    if(n == 1) return 0;
    for(int i = 1;i < n;i ++){ //i = x > 0 to < n
        if(n % i == 0){ //alice
            if(help(n - 1) == 0) return 1; //bob
        }
    }
        return 0;
}

int main()
{
    cout << help(1);
    return 0;
}
