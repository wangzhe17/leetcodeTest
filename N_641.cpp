class MyCircularDeque {
private:
    vector<int> array;
    int front, back;
    int size;
public:
    /** Initialize your data structure here. Set the size of the deque to be k. */
    MyCircularDeque(int k) {
        array.resize(k + 1, 0);
        size = k + 1;
        front = 0, back = 1;
    }
    
    /** Adds an item at the front of Deque. Return true if the operation is successful. */
    bool insertFront(int value) {
        if(isFull()) return false;
        array[front] = value;
        front = (front + size - 1) % size;
        return true;
    }
    
    /** Adds an item at the rear of Deque. Return true if the operation is successful. */
    bool insertLast(int value) {
        if(isFull()) return false;
        array[back] = value;
        back = (back + 1) % size;
        return true;
    }
    
    /** Deletes an item from the front of Deque. Return true if the operation is successful. */
    bool deleteFront() {
        if(isEmpty()) return false;
        front = (front + 1) % size;
        return true;
    }
    
    /** Deletes an item from the rear of Deque. Return true if the operation is successful. */
    bool deleteLast() {
        if(isEmpty()) return false;
        back = (back + size - 1) % size;
        return true;
    }
    
    /** Get the front item from the deque. */
    int getFront() {
        if(isEmpty()) return -1;
        return array[(front + 1) % size];
    }
    
    /** Get the last item from the deque. */
    int getRear() {
        if(isEmpty()) return -1;
        return array[(back + size - 1) % size];
    }
    
    /** Checks whether the circular deque is empty or not. */
    bool isEmpty() {
        return (front + 1) % size == back;
    }
    
    /** Checks whether the circular deque is full or not. */
    bool isFull() {
        return front == back;
    }
};