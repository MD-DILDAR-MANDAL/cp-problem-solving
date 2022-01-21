//Go to the steps and reach the top with minimum cost
//one or two step is possible
#include <bits/stdc++.h>
using namespace std;

int coststep(int i, int n, vector <int> v){ //v starts storing value from index 0
    if(i == n - 1) return v[n - 1];
    if(i > n - 1) return INT_MAX; //due to INT_MAX program will neglect this value,
    //if we give 0 then it will add 0 as a cost it will not neglect the steps process
    
    return min(coststep(i + 1, n, v), coststep(i + 2, n, v)) + v[i]; 
    //adding v[i] because not added the curent step 
    //(i+1-->next step, i+2-->next next step
    }
int main(){
    vector <int> v = {10, 20, 100, 50};
    //cout << min(coststep(0, 4, v), coststep(1, 4, v));
    cout << min(coststep(0, 4, v), coststep(1, 4, v));
    //steps starting form 0 or 1 choose minimum, since we are finding minimum
    //doesn't care about where it is starting 
    return 0;
}
