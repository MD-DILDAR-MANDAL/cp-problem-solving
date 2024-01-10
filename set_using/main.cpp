//using set
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,q;
    cin>>N;
    set<int>st;
    for(int i=0;i<N;i++)
    {   cin>>q;
        st.insert(q);
    }
    for(auto it:st){
        cout<<it<<" ";
    }
    int x;
    cin>>x;
    if(st.find(x)==st.end())
    {
        cout<<"\n"<<x<<" NOT present  ";
    }else cout<<"\n"<<x<<" PRESENT";
    st.erase(6);
     if(st.find(6)==st.end())
    {
        cout<<"\n"<<"6 NOT present  ";
    }else cout<<"\n"<<"6 PRESENT";
    
   return 0;
  }