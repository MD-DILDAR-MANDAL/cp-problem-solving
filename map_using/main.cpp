//using map
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    map <string,int> mp;   //key , value
    for(int i=0;i<n;i++)
    {
        string name;
        int marks;
        cin>>name>>marks;
        mp.insert({name,marks});
        
    }
    for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<"\n";
    }
   return 0;
  }