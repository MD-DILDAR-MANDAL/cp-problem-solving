#include<bits/stdc++.h>
using namespace std;
/*
///BFS
void topoSort(vector<vector<int>> adj){
	int len = adj.size();
	int inDegree[len] = {0};
	queue<int> qu;
	vector<int>ans;
	for(int i = 0 ; i < len ; i++){
		for(auto it : adj[i]){
			inDegree[it] ++;
		}
	}

	for(int i = 0 ; i < len ; i++){
		if(inDegree[i] == 0){
			qu.push(i);
		}
	}

	while(!qu.empty()){
		int node = qu.front();
		qu.pop();
		ans.push_back(node);
		for(auto it : adj[node]){
			inDegree[it] --;
			if(inDegree[it] == 0){
				qu.push(it);
			}
		}
	}

	if(ans.size() != len){
		cout << "cycle detected. Topological sort not possible" <<endl;
	}
	else{
		for(auto it : ans){
			cout << it << " "; 
		}
	}
}
*/

///DFS
void topoSort(int curr, vector<vector<int>> &adj, vector<int> &visit, stack<int> &st){
	visit[curr] = 1;

	for(auto it : adj[curr]){
		if(visit[it] != 1){
			topoSort(it, adj, visit, st);
		}
	}
	st.push(curr);
}

int main(){
	vector<vector<int>> adj={
		{}, 
		{}, 
		{3},
    	{1}, 
    	{0,1},
    	{0,2} 
	};
	vector<int> visit(adj.size());
	int len = adj.size();
	stack<int>st;
	for(int i = 0; i < len ; i++){
		if(!visit[i]){
			topoSort(i, adj, visit, st);
		}
	}
	for(int i = 0;i < len;i++){
		cout << st.top() << " ";
		st.pop();
	}
	return 0;
}