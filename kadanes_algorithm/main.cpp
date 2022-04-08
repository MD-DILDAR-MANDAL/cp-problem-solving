//largest sum contagious subarray
//write an efficient program to 
//find the sum of contagius subarray within a one-dimensional array
//of numbers that has the largest sum 

#include <bits/stdc++.h>
using namespace std;
        
int main(){
    int a[5] = {-2, -3, -4, -1, -2};
    
    int max_so_far = INT_MIN;
    int max_ending_here = 0;
    for(int i = 0;i < 5;i ++){
        max_ending_here += a[i];
        if(max_so_far < max_ending_here) max_so_far = max_ending_here;
        
        //important condition  since negative becomes more negative after adding negative
        if(max_ending_here < 0) max_ending_here = 0;
        }
            
    cout << "max contagious sum is " << max_so_far;
    return 0;
    }
