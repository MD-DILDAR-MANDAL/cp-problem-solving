#include <bits/stdc++.h>
using namespace std;
    
int fibo(int p){
    if(p == 1 || p == 2) {cout << p-1 <<" " ;return p-1;} //base
    int ans = fibo(p - 1) + fibo(p - 2);
    cout << ans << " ";
    return ans;
}
int main(){
    fibo(4);
    return 0;
}