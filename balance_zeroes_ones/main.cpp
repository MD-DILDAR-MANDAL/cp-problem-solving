#include <bits/stdc++.h>
using namespace std;

string word(string str){
            int cnt1 = count(str.begin(),str.end(),'1');
            cout << cnt1 << '\n';
            int cnt0 = count(str.begin(),str.end(),'0');
            cout << cnt0 << '\n';
                for(int i = 0;i > str.length();i++){
                    if(str[i] == '?'){
                        if(cnt1 > cnt0){
                            str[i] = '0';
                            cout << str << '\n';
                            cnt1++;
                        }
                        else{
                            str[i]= '1';
                            cout << str << '\n';
                            cnt0++;
                        }
                    }
                }
return str;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string strr;
        cin >> strr;
        strr = word(strr);
        cout << strr << endl;
        
    }
    return 0;
}