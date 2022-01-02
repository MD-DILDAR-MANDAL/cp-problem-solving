#include <bits/stdc++.h>
using namespace std;
 
stack <int> sortStack(stack <int> &stk1){
    stack <int> stk2;
    while(!stk1.empty()){
        int x = stk1.top();
        stk1.pop();
        while(!stk2.empty() && stk2.top() > x){
            stk1.push(stk2.top());
            stk2.pop();
        }
        stk2.push(x);
    }
    return stk2;
}
 int main(){
    stack <int> stk1;
    stk1.push(34);
    stk1.push(3);
    stk1.push(31);
    stk1.push(98);
    stk1.push(92);
    stk1.push(23);
    stack <int> stk2 = sortStack(stk1);
    cout << "Sorted numbers are:\n";
    while(!stk2.empty()){
        cout << stk2.top()<< " ";
        stk2.pop();
    }
}