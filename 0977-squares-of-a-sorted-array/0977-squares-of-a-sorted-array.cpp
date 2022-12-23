class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result;
        for(const auto& it: nums){
            result.push_back(it * it);
        }
        sort(result.begin(), result.end());
        return result;
    }
};