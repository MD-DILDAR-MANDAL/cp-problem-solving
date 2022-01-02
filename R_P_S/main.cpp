#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        map <char,char> who_beats = {{'R','P'},{'P','S'},{'S','R'}};
        map <char,int> update_ind = {{'R', -1},{'P', -1},{'S', -1}};
        string ans(n,'?');
        for(int i = n-1;i >= 0;i --){
            int index = update_ind[who_beats[s[i]]]; //R->P //P-> -1 -- //P->S //S->-1 -- //S->R //R->3 -- //S->R //R->2
            if(index == -1)
                ans[i] = s[i];    //R->3 //P->2 //R->1//R->0           //RRPR
            else ans[i] = ans[index];
            update_ind[s[i]] = i;
        }
        cout << ans <<"\n";
    }
return 0;
}