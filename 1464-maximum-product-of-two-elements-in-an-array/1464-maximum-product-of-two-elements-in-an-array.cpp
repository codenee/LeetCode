class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq(begin(nums), end(nums));
        
        int result = (pq.top() - 1);
        pq.pop();
        result *= (pq.top() - 1);
        pq.pop();
        
        return result;
        
    }
};