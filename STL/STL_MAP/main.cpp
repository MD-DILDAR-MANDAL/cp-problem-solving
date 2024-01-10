#include <bits/stdc++.h>
using namespace std;

int main(){
    //Maps or Ordered maps
    //Contains a pair
    //ascending order w.r.t key 
    map <int,int> m;
    m[2] = 3; //{2,3}
    //m[key] = value;
    m[1] = 4;
    m[5] = 6;
    m[7] = 3;
    for(pair <int,int> i : m){
        cout << i.first << " " << i.second << "\n";
        }
    cout << m[5] << "\n";
    cout << m[9] << "\n";//give 0 as no value as default
        

    unordered_map <int,int> um;
    um[1] = 6;
    um[2] = 4;
    um[9] = 2;
    um[3] = 1;
    for(pair <int,int> i : um){
        cout << i.first << " " << i.second << "\n";
        }

	return 0;
}
