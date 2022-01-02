#include <bits/stdc++.h>
using namespace std;

int main(){
     int n;
    cout << "enter size" << "\n";
    cin >> n;
    int arr[n];
    cout << "enter elements" << "\n";
    for(int i = 0 ;i < n;i++)
        cin >> arr[i];
    for(int i = 1;i < n;i++){ //loops start from second elements
        int current = arr[i]; //current is used for swaping
        int j = i-1;
        while(arr[j] > current && j >= 0){ // checking element before is greater than current i
                arr[j + 1] = arr[j];      //arr[j+1] is actually arr[i]
                j -- ;
            }
        arr[j + 1] = current;
        }
      for(int i = 0;i < n;i++)
      cout << arr[i] << " ";
        
return 0;
}
