class MinStack {
    int minNum;
    stack<int> temp;
    stack<int> mintemp;
public:
    /** initialize your data structure here. */
    MinStack() {
        minNum = 999999;
    }
    
    void push(int val) {
        temp.push(val);
        if(temp.size() == 1)
            mintemp.push(val);
        else if(val < mintemp.top()) mintemp.push(val);
        else{
            int t = mintemp.top();
            mintemp.push(t);
        }
    }
    
    void pop() {
        temp.pop();
        mintemp.pop();
    }
    
    int top() {
        return temp.top();
    }
    
    int getMin() {
        return mintemp.top();
    }
};