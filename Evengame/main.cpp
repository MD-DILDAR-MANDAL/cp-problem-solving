#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> v;
        int sum = 0; 
        for(int i = 0;i < n;i++){
            int x;
            cin >> x;
            sum += x;
        }
        if(sum % 2 == 0) cout << "1";
        else cout << "2";
    }
    return 0;
    }