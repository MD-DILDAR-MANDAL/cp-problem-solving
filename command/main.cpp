#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n, pos, i;
        cin >> n;
        string s = "/";
        string com;
        for(int i = 0; i < n; i++){
            cin >> com; //here only before "space" the value will be input  
                        //remaining will be buffered
 
            //s will get updated with the code further
            if(com == "pwd"){
                if(s == "/") cout << "/" << "\n";
                else cout << s << "/" << endl;
            }
            //for updating new directories
            else{
                //buffered string will be insert here
                cin >> com;
                if(com[0] != '/'){
                    if(s == "/") s += com;
                    else s += "/" + com;
                    
                }
                else s = com;
                //learn the string functions 
                //how string input works
                //for deleting directories
                while(s.find(".") != -1){
                    int k = s.find(".");
                    if(k == -1) break;
                    //taking string from s from 0 upto before first occurence of "."
                    string s1 = s.substr(0,k-1);
                    //after "." to last element 
                    string s2 = s.substr(k+2,s.size()-k-2);
                    //gives last position of "/"
                    k = s1.rfind("/");
                    s1 = s1.substr(0,k);
                    s = s1+s2;
                }
            }
        }
    }
    return 0;
}