#include <bits/stdc++.h>
using namespace std;

int main(){
	priority_queue <int> q; /*max heap
     * min heap priority_queue<int,vector <int>,greater<int>> q; */
    q.push(8);
    q.push(9);
    q.push(17);
    cout <<q.top();
    q.pop();
    cout<<'\n'<<q.top();
    return 0;
}
