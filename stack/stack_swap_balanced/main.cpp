//no of swap to make the balance
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "))((";
    stack <char> brace;
    for(auto a : str){
        if(a == '(') brace.push(a);
        else{
            if(!brace.empty() && brace.top() == '(')
                brace.pop();
            else
            brace.push(a);
            }
        }
        if(!brace.empty()){
            int n = brace.size();
            int m = (n/2+1)/2;
            cout << m;
        }else cout << "0";
	return 0;
}
