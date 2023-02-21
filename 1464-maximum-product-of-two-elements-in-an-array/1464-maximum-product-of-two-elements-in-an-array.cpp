class Solution {
public:
     int maxProduct(vector<int>& nums) {
        int first = 0, second = 0;
        
        for( const int& number: nums){
            
            if( number > first ){
                second = first;
                first = number;
                
            }else if( number > second ){
                second = number;
            }
        }
     return ( first - 1 ) * ( second - 1 );
}
    /*
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq(begin(nums), end(nums));
        
        int result = (pq.top() - 1);
        pq.pop();
        result *= (pq.top() - 1);
        pq.pop();
        
        return result;  
    }
    */
};