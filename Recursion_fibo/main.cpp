#include <bits/stdc++.h>
using namespace std;
    
int fibo(int p){
    if(p == 1 || p == 0)return p;
    else return fibo(p - 1) + fibo(p - 2);
}
int main(){
    for(int i = 1;i <= 5;i++) cout << fibo(i) << " ";
    return 0;
}