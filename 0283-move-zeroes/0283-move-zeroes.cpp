class Solution {    
   
public:
    static bool oper(int a){
        if ( a == 0){
            return true;
        }
        return false; 
    }
    void moveZeroes(vector<int>& nums) {
        
         int cnt = count(nums.begin(), nums.end(), 0);
         nums.erase(remove_if(nums.begin(), nums.end(), oper), nums.end());
        for(int i = 0; i < cnt; i++){
            nums.push_back(0);
        }
        
        return;
    }
};