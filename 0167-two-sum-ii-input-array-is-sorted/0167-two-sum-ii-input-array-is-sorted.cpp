class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int len = numbers.size();
        for(int i = 0; i < len - 1; i++){
            int lo = i + 1;
            int hi = len;
            while( lo < hi){
                int mid = lo + ( hi - lo ) / 2;
                if(numbers[mid] == target - numbers[i]){
                    return {i + 1, mid + 1};
                }
                else if(numbers[mid] >= target - numbers[i]){
                    hi = mid;
                }
                else{
                    lo = mid + 1;
                }
            }
            if(lo != numbers.size() && numbers[lo] == target - numbers[i]){
                return {i + 1, lo + 1};
            }
        }
        return {};
    }
};