const string URL = "https://leetcode.com/problems/implement-queue-using-stacks/description/";
class MyQueue {
    stack <int> s1;
    stack <int> s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        s2.push(x);
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
    }
    
    int pop() {
        int x=s2.top();
        s2.pop();
        return x;
    }
    
    int peek() {
        return s2.top();
    }
    
    bool empty() {
        return s2.empty();
    }
};
