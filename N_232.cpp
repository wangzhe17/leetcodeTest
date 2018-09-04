class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        _new.push(x);
    }

    void shiftStack()
    {
    	if (_old.empty())
    	{
    		while(!_new.empty())
    		{
    			_old.push(_new.top());
    			_new.pop();
    		}
    	}
    }

    /** Removes the element from in front of queue and returns that element. */
    void pop(void) {
        shiftStack();
        if(!_old.empty()) _old.pop();
    }
    
    /** Get the front element. */
    int peek() {
        shiftStack();
        if(!_old.empty()) return _old.top();
        return 0;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return _old.empty() && _new.empty();
    }

private:
	stack<int> _old, _new;
};