class MyCircularQueue {
private:
    int size;
    vector<int> q;
public:
    /** Initialize your data structure here. Set the size of the queue to be k. */
    MyCircularQueue(int k) {
        size = k;
    }
    
    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value) {
        if(isFull()) return false;
        q.push_back(value);
        return true;
    }
    
    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue() {
        if(isEmpty()) return false;
        q.erase(q.begin());
        return true;
    }
    
    /** Get the front item from the queue. */
    int Front() {
        if(isEmpty()) return -1;
        else return q.front();
    }
    
    /** Get the last item from the queue. */
    int Rear() {
        if(isEmpty()) return -1;
        else return q.back();
    }
    
    /** Checks whether the circular queue is empty or not. */
    bool isEmpty() {
        return q.size() == 0;
    }
    
    /** Checks whether the circular queue is full or not. */
    bool isFull() {
        return q.size() == size;
    }
};