#include <bits/stdc++.h>
using namespace std;

int main(){
vector <int>v = {5,6,7,8,9,10,1,2,3,4};
int target = 10;
int flag = 1;
int s = 0;
int e = v.size() - 1; 
while(s <= e){
    int m = (s + e) / 2;
    if(v[m] == target){
        flag = 0;
        cout << "yes";
        break;
        }
    else if(v[m] >= v[0]){            //to check which region we are considering
                                      //here it is region 1
         if(target < v[0] || target > v[m]){
            s = m + 1;               //if target is in region 2
        }
        else
        e = m - 1;
        }
    else{           //if v[m] is on region 2 then this situation                          
        if(target >= v[0] || target < v[m])e = m - 1;
        else s = m + 1;
        }
} if(flag)cout << "No";
	return 0;
}
