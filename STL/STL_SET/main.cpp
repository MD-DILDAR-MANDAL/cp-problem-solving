#include <bits/stdc++.h>
using namespace std;

int main(){
    //SET or ordered set
    //sorted (Ascending)
    //No duplicates
    set <int> s;
    
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(4);
    s.insert(1);
    //to access any random elements using iterator
    auto it = s.begin(); //it is the pointer
    while(*it != 3){ //*it is the element at the pointer
        it++; //increment the pointer
        }
        s.erase(it);
    for(int i : s){
        cout << i << " ";
        }
        cout << "\n";
        multiset <int> ms;
        // set or ordered set
        //sorted (Ascending)
        //duplicates
        ms.insert(2);
        ms.insert(3);
        ms.insert(3);
        ms.insert(4);
        ms.insert(1);
        for(int i : ms){
            cout << i << " ";
            }
            cout << "\n";
            
        unordered_set <int> us;
        //no duplicates
        //unordered set
        us.insert(2);
        us.insert(3);
        us.insert(3);
        us.insert(4);
        us.insert(1);
        for(int i : us){
            cout << i << " ";
            }
	return 0;
}
