//sum of three elements whose sum is equal to 13

#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v={1,6,3,9,12,7};
    sort(v.begin(),v.end());
    int start = 1;
    int end = v.size()-1;
    int sum = 0;
    int n = 1;
    for(int i = 0;i < v.size(); i++)
    {
        int sum2 = 13 - v[i];
        while(n){
            sum = v[start] + v[end];
            if(sum == sum2){
             cout << "yes";   
             n = 0;
            }else
            if(sum > sum2)
            {
                end--;
            }
            else start++;
        }
        if (n == 0){
            break;
        }
    }
	return 0;
}
