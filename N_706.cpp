class MyHashMap {
public:
    /** Initialize your data structure here. */
    MyHashMap() {
        HashMap = vector<int>(1000001, -1);
    }
    
    /** value will always be positive. */
    void put(int key, int value) {
        HashMap[key] = value;
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        return HashMap[key];
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        HashMap[key] = -1;
    }
private:
    vector<int> HashMap;
};