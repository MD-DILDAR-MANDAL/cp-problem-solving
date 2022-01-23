/*What is the maximum number of squares of size 2x2 that 
*can be fit in a right angled isosceles triangle of base B.*/

#include <bits/stdc++.h>
using namespace std;

//method one
int square(int b){
    if(b < 6) return 0; //base
    return (b - 3) / 2 + square(b - 3);
    }
    /*for any no. square one unit ,two unit ,three unit....
    *just change the values in substraction */
    
//method two
int num(int n){
    n /= 3;
    cout << n*(n-1)/2 << "\n";
    return 0;
    }
    /*for any no. square one unit ,two unit ,three unit....
    *just change the values in division accordingly */

int main(){
    int t;
    cin >> t;
    while(t--){
        int b,n;
        cin >> b;
        n = b;
        cout << square(b) << '\n';
            num(n);
        }
	return 0;
}
