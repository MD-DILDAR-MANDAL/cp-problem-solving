//to input a string in stack 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack <char> s;
    string str;
    cin >> str;
    for(auto a : str)
        s.push(a);
    while(!s.empty()){
        cout << s.top() ;
        s.pop();
    }
return 0;
}
