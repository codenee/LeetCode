class Solution {    
   
public:
    //solution 1
    static bool oper(int a){
        if ( a == 0){
            return true;
        }
        return false; 
    }
    void moveZeroes2(vector<int>& nums) {
        
         int cnt = count(nums.begin(), nums.end(), 0);
         nums.erase(remove_if(nums.begin(), nums.end(), oper), nums.end());
        for(int i = 0; i < cnt; i++){
            nums.push_back(0);
        }
        
        return;
    }
    
    //solution 2
     void moveZeroes3(vector<int>& nums) {
        
         for(int i = 0, next = 0; i < nums.size(); ++i){
             if(nums[i]){
                swap(nums[i], nums[next++]);
             }
         }
        
        return;
    }
    //solution 3
    void moveZeroes(vector<int>& nums) {
        
        stable_partition(begin(nums), end(nums), [](int i){return i;});
        
        return;
    }
};