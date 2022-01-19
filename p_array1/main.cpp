#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n = 7;
    int arr[] = {1,2,3,4,5,6,7};
    int cnt = 0; 
    while(cnt < n - 1){
        int temp = arr[cnt];
        arr[cnt] = arr[cnt+1];
        arr[cnt+1] = temp;
        cnt += 2;
 }
 for(auto it:arr){
     cout << it << " ";
     }
    
	return 0;
}
