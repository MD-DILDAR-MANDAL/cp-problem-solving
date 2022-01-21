//program to count the number of ways to reach the top
//of the staircase
//one step at a time or two step at a time

#include <bits/stdc++.h>
using namespace std;

//down to up
int steps(int x,int n){
    if(x == n)return 1; //base
    if(x > n) return 0; //base
    return steps(x+1,n) + steps(x+2,n);
    }
//up to down
int downstep(int m){
    if(m == 0)return 1; //base
    if(m < 0)return 0; //base
    return downstep(m-1) + downstep(m-2);
    }
int main(){
    cout << steps(0,5) << '\n';
    cout << downstep(5);
return 0;
}
