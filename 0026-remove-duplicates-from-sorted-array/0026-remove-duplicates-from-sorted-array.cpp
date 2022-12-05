class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> nSet;
        
        for(const auto &it : nums){
            nSet.insert(it);
        }
        
        nums.assign(nSet.begin(), nSet.end());
        
        return int(nSet.size());
    }
};