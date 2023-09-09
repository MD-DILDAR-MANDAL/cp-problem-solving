#include <bits/stdc++.h>
using namespace std; 

int main(){
	priority_queue <int> q;
    // Dont have front or back only points to
    //largest element.
    q.push(3);
    q.push(2);
    q.push(1);
    q.push(5);
    q.push(4);
    cout << q.top() << "\n";
    //print as descending order
    while(q.size() > 0){
        cout << q.top() << " ";
        q.pop();
        }
    
	return 0;
}
