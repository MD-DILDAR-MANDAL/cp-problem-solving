//max heaps
#include <bits/stdc++.h>
using namespace std;

//to heapify a subtree with root at given index
void maxheapify(int arr[], int i, int n){
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;
    if(l < n && arr[i] < arr[l])
        largest = l;
    if(r < n && arr[r] > arr[largest])
        largest = r;
    if(largest != i){
        swap(arr[i],arr[largest]);
        maxheapify(arr,largest,n);
        }
}

//this function basically builds max heap
void buildmaxheap(int arr[],int n){
    //start from bottom most and rightmost
    //modes in bottom up way 
    for(int i = n / 2 - 1;i >= 0;i --)
        maxheapify(arr,i,n);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i ++)
        cin >> arr[i];
    buildmaxheap(arr,n);
    for(int i = 0;i < n;i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}