//codechef question restaurant rating 

#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n,mode,x,sz = 0;
  //declaring two priority queue
  priority_queue <int> up,down;
  cin >> n;
  while(n--){
    cin >> mode;
    if(mode == 1){
      cin >> x;
      //check condition and push respectively
      //..in up taken negative sign to make decreasing order
      //..max become min and min become max 
      //..in down taken positive so max is max 
      if(up.size() == 0 || x >= -up.top()) up.push(-x);
      else down.push(x);
      sz++;
     //maintaining elements size by comparing
      while(up.size() < sz / 3){
        x = down.top(); 
        down.pop();
        up.push(-x);
      }
      //maintaining elements size by comparing
      //..& for first three elemnts it will pop the 1 and 2 element and push it to down. 
      while(up.size() > sz/3){
        x = -up.top(); 
        up.pop();
        down.push(x);
      }
    }
    else{
      if(sz / 3 == 0) cout << "No reviews yet" << "\n";
      else cout << -up.top() << "\n";
    }
  }
  return 0;
} 
