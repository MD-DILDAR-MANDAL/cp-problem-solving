#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[] = {2,2,2,2,5,5,2,3,3};
int n = sizeof(arr)/sizeof(arr[0]);
map <int,int>m;
    for(int i = 0;i < n;i++) m[arr[i]]++;
    
        int flag = 1;
    for(auto it:m){
        if(it.second > n/2){
            cout << it.first << endl;
            flag = 0;
            break;
        }
    }
        if(flag){
        cout << "No majority element" << endl;
        }
return 0;
}
