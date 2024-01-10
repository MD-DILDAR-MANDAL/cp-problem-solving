#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1;
    cin>>s;
    s1=s;
    reverse(s.begin(),s.end());
    cout<<"\n"<<"Is palindrome?";
    if(s1==s)cout<<"\n"<<"yes";
    else
        cout<<"\n"<<"no";
     return 0 ;
}