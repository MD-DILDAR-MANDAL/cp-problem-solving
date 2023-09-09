//check the braces are balanced or not
#include <bits/stdc++.h>
using namespace std;

bool check_balanced(string str){
    stack <char> braces;
    for(auto a : str){
        if(a == '(') braces.push(a);
        else{
                if(!braces.empty() && braces.top() == '(')
                    braces.pop();
                else braces.push(a);
            }
        }
    return (braces.empty());
}
int main(){
    string str1 = "(()())";
    cout << check_balanced(str1) << endl;
    return 0;
}
