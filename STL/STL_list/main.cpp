#include <bits/stdc++.h>
using namespace std;

int main(){
    //list(doubly linked list)
    //(push/pop)front->12345<-back(push/pop)
    list <int> l;
    l.push_back(4);//4
    l.push_back(1);//4 1
    l.push_front(3);//3 4 1
    l.push_back(2);//3 4 1 2
    l.push_back(5);//3 4 1 2 5
    /*
      * o(1)
      * push_back()
      * pop_back()
      * push_front()
      * pop_front()
      * front()
      * back()
      * size()
     */
    for(int i : l){
        cout << i << " ";
        }

	return 0;
}
