#include <bits/stdc++.h>
using namespace std;
int main(){
    map <char,int> count;
string s1 = "apple";
string s2 = "elapp";
for(int i = 0; i < s1.size();i++)
    count[s1[i]]++;
for(int i = 0;i < s2.size();i++)
    count[s2[i]]--;    
    int flag = 1;
    for(char i = 'a';i <= 'z';i++){
        if(count[i] != 0){
            flag = 0;
            cout << "not anagram";
            break;
        }
        }
        if(flag) cout << "anagram";
return 0;
}