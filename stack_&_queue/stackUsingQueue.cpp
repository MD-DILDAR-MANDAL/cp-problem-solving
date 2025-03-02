class MyStack {
public:
    queue <int> qu;
    queue <int> qu2;
    MyStack() {

    }
    
    void push(int x) {
        qu.push(x);
    }
    
    int pop() {
        int x; 
        while(qu.size() > 1){
            qu2.push(qu.front());
            qu.pop();
        }
        x = qu.front();
        qu.pop();
        
        while(qu2.size() > 0){
            qu.push(qu2.front());
            qu2.pop();
        }
        return x;
    }
    
    int top() {
        return qu.back();
    }
    
    bool empty() {
        return qu.size() == 0;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

//for using queue
/*
    int pop() {
        int x; 
        int size = qu.size();
        while(size > 1){
            x = qu.front();
            qu.pop();
            qu.push(x);
            size--;
        }
        x = qu.front();
        qu.pop();
        return x;
    }
*/