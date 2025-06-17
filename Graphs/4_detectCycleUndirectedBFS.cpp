#include<iostream>
#include<vector>
#include<queue>
using namespace std;
bool detect(int src, vector<vector<int>> &adj, vector<int> &visit){
	visit[src] = 1;

	queue<pair<int,int>> qu;
	qu.push({src, -1});

	while(!qu.empty()){
		int node = qu.front().first;
		int parent = qu.front().second;
		
		qu.pop();

		for(auto adjNode : adj[node]){
			if(!visit[adjNode]){
				visit[adjNode] = 1;
				qu.push({adjNode, node});
			}
			else{
				///if(adjNode == parent) that means we already traversed that node as it was the parent earlier 
				///if adjNode != parent that means we are at a already visited node it is froming a cycle
				if(adjNode != parent ){
					return true;
				}
			}
		}
	}
	return false;
}

int main(){
	vector<vector<int>> adj = {
		{1}, 
		{2}, 
		{1, 3}, 
		{2,0}
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