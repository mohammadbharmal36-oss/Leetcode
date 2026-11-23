class MinStack {
public:
    vector<long long> v;
    long long mi =LLONG_MAX;
    MinStack() {
        v.reserve(30000);
    }
    void push(int value) {
        if(v.empty()) {
            mi = value;
            v.push_back(value);
        }
        else if(value >= mi) {
            v.push_back(value);
        }
        else {
            v.push_back(2LL*value-mi);
            mi = value;
        }
    }
    void pop() {
        if(v.back()<mi) {
            mi=2LL*mi-v.back();
        }
        v.pop_back();
    }
    int top(){
        return v.back()<mi?(int)mi:(int)v.back();
    }
    int getMin() {
        return (int)mi;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */