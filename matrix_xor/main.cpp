// matrix xor
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        //1st column
        ll ans=0;
        for(ll i=1;i<=n;i++)
        {
            if(min(i,m) %2 !=0)
            {
            ans ^= k+i+1;
            }
        }
        //last row
        for(ll j=2;j<=m;j++){
            if(min(n,m-j+1) % 2 != 0)
            {
            ans ^=k+n+j;
            }
        }
        cout<<ans<<"\n";
    }
 
  return 0;
  }