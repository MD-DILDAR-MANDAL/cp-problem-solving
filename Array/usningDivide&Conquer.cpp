/*maxSubarray*/

#include<bits/stdc++.h>
using namespace std;


int maxCrossingSum(int arr[],int f,int mid,int l){
    int leftSum=INT_MIN;
    int sum=0;
    for(int i=mid;i>=f;i--){
        sum+=arr[i];
        leftSum=max(leftSum,sum);
    }

    int rightSum=INT_MIN;
    sum=0;
    for(int i=mid+1;i<=l;i++){
        sum+=arr[i];
        rightSum=max(rightSum,sum);
    }

    return max(max(leftSum,rightSum),leftSum+rightSum-arr[mid]);
}

int maxSubarraySum(int arr[],int f,int l){
    if(f==l)return arr[f];
    if(f>l)return INT_MIN;

    int mid = (f+l)/2;
    return max(max(maxSubarraySum(arr,f,mid-1), maxSubarraySum(arr,mid+1,l)), maxCrossingSum(arr,f,mid,l));
}

int main(){
    int arr[]={0,1,-3,7,3,-1,9,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    int val=maxSubarraySum(arr,0,len-1);
    cout << val;
    return 0;
}