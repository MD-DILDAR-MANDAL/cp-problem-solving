class MyQueue {
    stack <int> st;
    stack <int> st2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        int x;
        int size = st.size();

        while(size > 1){
            st2.push(st.top());
            st.pop();
            size --;
        }
        x = st.top();
        st.pop();

        size = st2.size();
        while(size > 0){
            st.push(st2.top());
            st2.pop();
            size --;
        }
        return x;
    }
    
    int peek() {
        int x;
        int size = st.size();

        while(size > 1){
            st2.push(st.top());
            st.pop();
            size --;
        }
        x = st.top();

        size = st2.size();
        while(size > 0){
            st.push(st2.top());
            st2.pop();
            size --;
        }

        return x;
    }
    
    bool empty() {
        return (st.size() == 0);
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */