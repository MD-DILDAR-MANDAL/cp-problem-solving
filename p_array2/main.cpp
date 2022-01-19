#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x,p,k; 
            //n - no of array elements
            //x - the elemnt to be considered
            //p - p th smallest element
            //k - can be replaced this element only with 0
        cin >> n >> x >> p >> k;
        int arr[n];
        for(int i = 0;i < n;i++ )cin >> arr[i];
        sort(arr, arr + n);
        int pos;
        for(int i = 0;i < n;i++){
            if(arr[i] == x) pos = i+1;
        }
        
        if(p== pos) cout << "0" << '\n';
        else
            if(k > p){
                if(k == x) cout << "-1" << '\n';
                else
                if(p > pos) cout << p - pos << '\n';
                else 
                if(p < pos) cout << "-1" << '\n';
            }
            
        
    }
    return 0;
}
