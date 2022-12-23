class Solution {
public:
    //solution 1
    vector<int> sortedSquares2(vector<int>& nums) {
        vector<int> result;
        for(const auto& it: nums){
            result.push_back(it * it);
        }
        sort(result.begin(), result.end());
        return result;
    }
    //solution 2
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size());
        int left = 0, right = nums.size() - 1;
        for(int k = nums.size() - 1; k >= 0; k--){
            if(abs(nums[right]) > abs(nums[left])){
                result[k] = nums[right] * nums[right--]; 
            }
            else{
                result[k] = nums[left] * nums[left++];
            }
        }
        
        return result;
    }
};