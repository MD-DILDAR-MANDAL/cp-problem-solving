//gfg
struct StackNode {
    int data;
    StackNode *next;

    StackNode(int a) {
        data = a;
        next = NULL;
    }
};


// } Driver Code Ends

class MyStack {
  private:
    StackNode *top;

  public:
    void push(int x) {
        StackNode *dummy = new StackNode(x);
        dummy -> next = top;
        top = dummy;
    }

    int pop() {
        if(top == NULL) return -1;
        
        int x = top->data;
        top = top ->next;
        return x;
        
    }

    MyStack() { top = NULL; }
};