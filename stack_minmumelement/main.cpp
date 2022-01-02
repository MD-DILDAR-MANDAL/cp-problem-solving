#include<bits/stdc++.h>
using namespace std;
    
int main(){
    stack <int> stk1;
    stack <int> stk2;
    int n;
    cout << "enter size";
    cin >> n;
    int x,y;
    for(int i = 0;i < n;i++){
        cin >> x;
        if(i == 1){
            if(stk1.top() > x)
                stk2.push(x);
            else{
                y = stk1.top();
                stk2.push(y);
            }
        }else
        if(i > 1){
            if(x < stk2.top()) stk2.push(x);
            else {
                y = stk2.top();
                stk2.push(y);
            }
        }
        stk1.push(x);
        }
    for(int i = 0 ;i < n-1;i++){
    cout << "\n" << "current minimum  " << stk2.top();
    stk1.pop();
    stk2.pop();
    }
return 0;
}
