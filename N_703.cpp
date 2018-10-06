class KthLargest {
public:
    KthLargest(int k, vector<int> nums) 
    {
        m_size = k;
        for(auto &it : nums)
        {
        	m_pq.push(it);
        	if(m_pq.size() > k) m_pq.pop();
        }
    }
    
    int add(int val) 
    {
        m_pq.push(val);
        if(m_pq.size() > m_size)
        {
        	m_pq.pop();
        }
        return m_pq.top();
    }
private:
	int m_size;
	priority_queue<int, vector<int>, greater<int>> m_pq;
};