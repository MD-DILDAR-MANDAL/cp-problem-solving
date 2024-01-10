#include <bits/stdc++.h>
using namespace std;

int main(){
    //queue
    //front(pop)->1,2,3,4,5 <- back(push) only
    //can access both front and back for output
    //FIFO FIRST IN FIRST OUT
    queue <int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout << q.front() << " " << q.back() << "\n";
    while(q.size() > 0){
        cout << q.front() << " ";
        q.pop();
        }
    cout << "\n";
    
    //DEQUE
    //front(push/pop)->1,2,3,4,5 <- back(push/pop)
    //can access any random element dq[4];
    deque <int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    dq.push_back(5);
    cout << "\n" << dq[4];
    while(dq.size() > 0){
        cout << dq.front() << " ";
        dq.pop_front();
        }
  /*  while(dq.size() > 0){
        cout << dq.back() << " ";
        dq.pop_back();
        } */
    cout << "\n" ;
    
    
    return 0;
}
