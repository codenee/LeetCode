class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int mxcover = 0;
        
        for(int i=0 ; i<= mxcover ; i++)
        {
            if(mxcover >= nums.size()-1)
                return true;
            mxcover = max(mxcover , i + nums[i]);
        }
        return false;
    }
};