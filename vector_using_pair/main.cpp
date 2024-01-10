//using pair
#include <bits/stdc++.h>
using namespace std;

int main (){
 int n;
 cin>>n;
 vector<pair<int,int>>v;       //using pair
 for(int i=0;i<n;i++){
     int math,pcm;
     cin>>math>>pcm;
     v.push_back({math,pcm});
 }
 sort(v.begin(),v.end());
 reverse(v.begin(),v.end());
 for(int j=0;j<n;j++){
     cout<<v[j].first<<" "<<v[j].second<<"\n";
 }
  return 0;
}