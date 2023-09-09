#include<bits/stdc++.h>
using namespace std;

bool checkpalindrome(string s)
{
    int i=0;
    int j=s.size()-1;
    while(i<j){
        if(s[i]!=s[j]){return false;}
        i++;
        j--;
    }
    return true;
}

int main()
{
    string n;
    cin>>n;
    cout<<checkpalindrome(n);
        return 0 ;
}