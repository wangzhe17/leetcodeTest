class MyHashSet {
private:
    vector<bool> set;
public:
    /** Initialize your data structure here. */
    MyHashSet() {
        set = vector<bool>(1000001, false);
    }
    
    void add(int key) {
        set[key] = true;
    }
    
    void remove(int key) {
        set[key] = false;
    }
    
    /** Returns true if this set did not already contain the specified element */
    bool contains(int key) {
        return set[key];
    }
};