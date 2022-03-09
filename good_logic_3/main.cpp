/*to count no of zeroes at the end
*in the factorial of that number*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t --){
        int n,zero = 0,c = 5;
        cin >> n;
        while(n / c >0){
            zero += n/c ;
            c *= 5;
        }
        cout << zero << "\n";
    }
	return 0;
}
