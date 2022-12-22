// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
     
       int lower = 1, high = n, mid = 0;
        while(lower < high){
            mid = lower + (high - lower) / 2;
            if(isBadVersion(mid))
                high = mid;
            else
                lower = mid + 1;
        }
        return lower;
    }
};