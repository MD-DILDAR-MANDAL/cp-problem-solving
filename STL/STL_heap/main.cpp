#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v = {0,1,2,4,5};
    
    //makes max heap
    //o(n)
    make_heap(v.begin(),v.end());
    for(auto it : v)cout << it << " ";
    cout << "\n";
    
    //entering to new modified vector
    v.push_back(7);
    for(auto it : v)cout << it << " ";
    cout << "\n";
    
    //remaking heap adding 7
    //o(log(N))---as except 7 all are in max heap;
    push_heap(v.begin(),v.end());
    for(auto it : v)cout << it << " ";
    cout << "\n";
    
    //it will undo the push_heap of 7
    pop_heap(v.begin(),v.end());
    for(auto it : v)cout << it << " ";
    cout << "\n";
    
    v.pop_back();
    for(auto it : v)cout << it << " ";
    cout << "\n";
    
    //for min heap
    make_heap(v.begin(),v.end(),greater <int>());
    for(auto it : v)cout << it << " ";
    cout << "\n";
return 0;
}
