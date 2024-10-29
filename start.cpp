#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;

   cin >> t; //test case

   while(t--){

      int x;
      cin >>x; //12  12/10 q= 1 rem = 2;  1/10 q=0 rem= 1

      int cnt = 0;
      int num=x;

      while(x>0){
         int q = x/10;           //1 //0
         int rem = x%10;         //2 //1

         if(num % rem == 0){         
            cnt++;               //1
         }
         x = q;                  //x=1

      }
      cout << cnt << " ";
   }

   return 0;
}