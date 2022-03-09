#include <bits/stdc++.h>
using namespace std;
//o open //c close //n size
void help(int o,int c,int n,string temp, vector <string> &ans)
{
    if(c == n) ans.push_back(temp);//function end actually //base condition
    else{
        //brackets are saved in string temp using +
        if(o < n) help(o + 1, c, n, temp + '{', ans);
        //now o has updated to o+1. c will be incremented next and '}' will be added 
        if(c < o) help(o, c+1, n, temp + '}',ans);
        }
}

int main(){
    string temp;
    vector<string> ans;
    help(0, 0, 2, temp, ans);
    for(auto it:ans ) cout << it << endl;
    return 0;
}
