#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {   int n;
        cin >> n;
        int arr[n];
        for(int i = 0;i < n;i++)
       cin >> arr[i];
    int c = 0;
    for(int i = 0;i < n;i++)
    {
        if(arr[i] <= 7 && arr[i] >= 1)
            c++;
        if(c == 7 )
        {
            cout << i + 1 << endl;
            break;
        }
    }
}
return 0;
}