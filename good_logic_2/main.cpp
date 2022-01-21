//special type of fibonacci series
#include <bits/stdc++.h>
using namespace std;

 int f(int n,int a,int b){
     if(n == 0) return a;
     else 
     if(n == 1) return b;
     else
     if(n == 2)return (a ^ b);//xor ---> ^
     return f(n%3, a, b); 
     //properties of xor
     //it is repeating 0, 1, 2, 3%3 = 0, 4%3 = 1, 5%3 = 2
     //values too
 }
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while(t--){
      int a, b, n;
      cin >> a >> b >> n;
      cout << f(n,a,b) <<"\n";
  }
  return 0;
} 
