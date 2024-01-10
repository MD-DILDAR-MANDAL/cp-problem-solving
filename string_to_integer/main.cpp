//sum of digits in the integer using string for integer 
#include <bits/stdc++.h>
using namespace std;


  void solve (void){
      string N;
      cin>>N;
      int sum=0;
      for(int i=0;i<N.size();i++){
          char ch =N[i];
          sum+=(ch -'0');   //ch-'0' ----convert ch to integer 
      }
      cout<<sum<<"\n";
  }
  int main()
  {
   solve();
   return 0;
  }