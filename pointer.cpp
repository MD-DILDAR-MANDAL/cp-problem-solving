#include <bits/stdc++.h>
using namespace std;

int ans = 0;
int *p = &ans;
void sum(int *arr){
    arr[0]++;
    *p += arr[0];
    cout << *p << "\n";
}
int main(){
    int arr[]={2,3,4};
    for(int i=0;i < 3;i++ )sum(arr);
    cout << arr[0] << "    " << ans;
}




