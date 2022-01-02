// chef of the year
#include <bits/stdc++.h>
using namespace std;

void solve (void)
{  
    int N,M;
    cin>>N>>M;
    map<string,string>mp;
    while(N--)
    {
        string chef_name,chef_country;
        cin >>chef_name>>chef_country;
        mp.insert({chef_name,chef_country});
    }
    map<string,int>chef_vote;
    map<string,int>country_vote;
    while(M--)
    {
        string chef_name;
        cin>>chef_name;                //enters the subject
        chef_vote[chef_name]++;        //increment the int value in the chefvote 
                                       //against the chefname
        string country= mp[chef_name]; //country takes value of chef country against 
        country_vote[country]++;       //the chefname in mp and then increment int value  
    }
    int mx1=0,mx2=0;
    string chef ="zzzzzzzzz";
    string country ="zzzzzzzzzz";
    for(auto it:chef_vote)
    {
        if(it.second>mx1){
            mx1=it.second;
            chef=it.first;
        }
        if(it.second==mx1)
        {
            chef=min(chef,it.first);
        }
    }
    for(auto it:country_vote)
    {
        if(it.second>mx2)
        {
            mx2=it.second;
            country=it.first;
        }
        if(it.second==mx2){
            country =min(country,it.first);
        }
        
    }
    cout<<country<<"\n";
    cout<<chef;
    
}
int main(){
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    
   return 0;
  }