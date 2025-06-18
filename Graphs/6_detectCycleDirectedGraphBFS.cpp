#include<bits/stdc++.h>
using namespace std;

// Kahn's Algorithm
bool detectCycle(vector<vector<int>> adj){
	int len = adj.size();
	int inDegree[len] = {0};
	queue<int> qu;
	int cnt = 0;

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
		cnt++;
		for(auto it : adj[node]){
			inDegree[it] --;
			if(inDegree[it] == 0)qu.push(it);
		}
	}

	if(cnt == len)return false;
	return true;
}

int main(){
	vector<vector<int>> adj={
	{0, 1}, 
	{1, 2}, 
	{2, 3},
    {4, 5}, 
    {5, 1}, 
    {5, 2}
};
	cout << detectCycle(adj) << endl;
	return 0;
}