class KthLargest {
public:
priority_queue<int> q;
int size;
    KthLargest(int k, vector<int>& nums) {
        size = k;
        for(int i : nums) add(i);
    }
    
    int add(int val) {
        // if(q.size()<size) {
        //     q.push(-val);
        // }
    q.push(-1*val);
    if(q.size()>size)q.pop();
    return -1*q.top();
        // else {
        //     if(-q.top()<val) {
        //         q.pop();
        //         q.push(-val);
        //     }
        // }
        // return -q.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
