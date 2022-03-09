#include <bits/stdc++.h>
using namespace std;

//we have to check if the queen is in previous cells we need to check 
//in three direction
bool safe(int i, int j, vector <string> &v){
    int x = i, y = j;
    int flag = 0;
    //checking if the queen is in upper right diagonal
    while(x >= 0 && y >= 0){
        if(v[x][y] == 'Q') flag = 1;
        x --;
        y --;
    }
    if(flag == 1)return false;
    x = i;
    y = j;
    //checking if the queen is in upper vertical
    while(x >= 0){
        if(v[x][y] == 'Q') flag = 1;
        x --;
    }
    if(flag)return false;
    x = i;
    y = j;
    //checking if the queen is in upper left  diagonal
    while(x >=0 && y < v[i].size()){
        if(v[x][y] == 'Q') flag = 1;
        x--;
        y++;
    }
    if(flag) return false;
    
    return true;        
}
void help(int i, vector <string> &v){
    if(i == v.size()){ //printing all values when reached at end
        for(int i = 0; i < v.size();i ++) 
        cout << v[i] << endl;
        cout << endl << endl;
        }
    else{
        for(int j = 0;j < v[i].size();j ++){
            if(safe(i,j,v)){
                v[i][j] = 'Q';
                help( i+1 ,v);//if it returns true as in the safe function there is a return true at end
                //then the next code will not executed as not required. 
                //(recursion) if not return true then the Q at previous position was not in proper place for future
                //so again replaace that queen with "."---->the original value
                v[i][j] = '.';
            }
        }
    }
}
int main(){
    vector <string> v = {"....","....","....","...."};
    help(0,v);
	return 0;
}
