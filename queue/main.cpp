#include <bits/stdc++.h>
using namespace std;
#define n 20
class qu {
    int*arr;
    int front;
    int back;
    public:
    qu(){
        arr=new int[n];
        front=-1;
        back=-1;
    }
    void push(int x){
        if(back==n-1){
            cout<<"queue over flow"<<endl;
            return ;
        }
        back++;
        arr[back]=x;
        if(front==-1){
            front++;
        }
    }
    void pop(){
        if(front ==-1||front>back){
            cout<<"NO elements"<<endl;
            return;
        }
        front++;
    }
int peek(){
    if(front==-1||front>back){
        cout<<"no elemnts"<<endl;
        return -1;
    }
    return arr[front];
}    
bool empty(){
    if(front==-1||front>back){
        return true;
    }
    return false;    
    }

    
};
int main() {
    
    qu q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
  //  q.pop();
    if(q.empty()){
        cout<<"empty"<<endl;
    }else cout<<"not empty"<<endl;
    return 0;
}
