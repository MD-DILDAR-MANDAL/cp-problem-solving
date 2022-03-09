#include <bits/stdc++.h>
using namespace std;

void help(vector <int> &v, int i, vector <vector <int>> &ans, vector <int> temp){
    if(i == v.size()) {
        ans.push_back(temp);
    }
    else{
        help(v, i+1, ans, temp);  //ignore
        temp.push_back(v[i]);     
        help(v, i+1, ans, temp);
        temp.pop_back();          //backtracking
        }
        return ;
    }
int main(){
    vector <int> v = {1,2,3};
    vector <int> temp;
    vector < vector<int> > ans;
    help(v,0,ans,temp);
    for(int i = 0;i < ans.size();i ++){
        for(int j = 0;j <= ans[i].size();j++) {
            int it = ans[i][j];
            cout << it << " ";
        }
        cout << "\n";
        }    
    return 0;
}