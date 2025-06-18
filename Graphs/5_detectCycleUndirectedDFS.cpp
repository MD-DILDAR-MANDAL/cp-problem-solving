#include<iostream>
#include<vector>
#include<stack>
using namespace std;

bool detect(int src, vector<vector<int>> &adj, vector<int> &visit){
	visit[src] = 1;
	stack<pair<int,int>> st;
	
	st.push({src, -1});
	while(!st.empty()){
		int node = st.top().first;
		int parent = st.top().second;
		st.pop();

		for(auto it: adj[node]){
			if(!visit[it]){
				visit[it] = 1;
				st.push({it, node});
			}
			else{
				if(it != parent){
					return true;
				}
			}
		}
	}
	return false;
}

int main(){
	vector<vector<int>> adj = {
		{1,3}, 
		{0,2}, 
		{1}, 
		{0,4},
		{3}
	};
	int len = adj.size();
	vector<int> visit(len,0);
	bool flag = 0;

	for(int i = 0; i < len;i++){
		if(!visit[i] && detect(i, adj, visit)){
			flag = 1;
			break;
		}
	}
	if(flag){
		cout << "cycle detected" << endl;
	}
	else{
		cout << "no cycle" << endl;
 	}
	return 0;
}