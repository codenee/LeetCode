class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k > nums.size()){
            k = k % nums.size();
        }
        
        if(k == nums.size()){
            return;
        }
        
        int l = nums.size() - k;
        vector<int> result(nums.begin()+l, nums.end());
        for(int i = 0; i < l; i++){
            result.push_back(nums[i]);
        }
        nums.clear();
        nums = result;
    }
};