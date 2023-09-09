#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int s = 0;
    int e;
    if(t < 100) e = 10;
    else if(t < 1000) e = 35;
    else if(t < 10000) e = 100;
    int ans;
    int flag = 1;
    while(s <= e){
    int m = (s + e)/ 2;
     int sqr = m*m;
    if(sqr == t){
        flag = 0;
        cout << m <<endl;
    break;
    }
    else if(sqr < t ){
    s = m + 1;
    ans = m;
    }
    else {e = m - 1;
    }
  }
  if(flag)cout << ans << endl;
  
    
    return 0;
}
