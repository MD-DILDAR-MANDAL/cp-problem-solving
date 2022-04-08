#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
	while(n --){
        string s,t;
        cin >> s;
        cin >> t;
        
        for(int i = 0;i < 5;i ++){
            
            if(s[i] == t[i]) t[i] = 'g';
            
            else 
                t[i] = 'b';
            }
        
        }
    return 0;
}
