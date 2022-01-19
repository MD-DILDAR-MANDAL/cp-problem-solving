#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n == 0) return 0;//base
    int temp = sum(n-1);
    return temp+n;
    }

int facto(int m){
    if(m == 0) return 1; //base
    return facto(m-1)*m;
}
    
int main(){
    cout << sum(10) << "\n" << facto(5);
	return 0;
}
