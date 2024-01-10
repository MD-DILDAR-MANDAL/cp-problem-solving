#include <bits/stdc++.h>
using namespace std;

void min_heapify(int arr[],int i,int n){
    int minimum = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if(l < n && arr[l] < arr[minimum]){
        minimum = l;
    }
    if(r < n && arr[r] < arr[minimum]){
        minimum = r;
        }
    if(minimum != i){
        swap(arr[i],arr[minimum]);
        min_heapify(arr,minimum,n);
        }
}
    
void build_min_heaps(int arr[],int n){
    for(int i = n / 2 - 1;i >= 0;i--)
        min_heapify(arr,i,n);
}
int main(){
	int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i ++)
        cin >> arr[i];
    build_min_heaps(arr,n);
    for(int i = 0;i < n;i ++)
        cout << arr[i] <<" ";
    return 0;
}
