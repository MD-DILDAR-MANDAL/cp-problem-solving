//using map
#include <bits/stdc++.h>
using namespace std;

void solve (void)
{  
    int N,M,Q;
    cin>> N >> M >> Q;
    set<int>st;
    bool consistent = true;
    while(Q--)
    {
        char ch;
        int i;
        cin>>ch>>i;
     if(ch=='+')
     {
        st.insert(i);
        
        if(st.size()>M)
        {
            consistent = false;
        }
     }
    else 
    {
              if(st.find(i)!=st.end())
               { 
                   st.erase(i);
               }  else
                { 
                    consistent=false;
                }
           }
     
   }if(consistent)
     {
         cout<<"consistent"<<"\n";
     }else {
         cout<<"inconsistent"<<"\n";
        
     }
}
 int main()
 {
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
   return 0;
  }