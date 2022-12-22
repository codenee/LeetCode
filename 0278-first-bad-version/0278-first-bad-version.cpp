// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
     
        int num = 1;
        while(!isBadVersion(num)){
            num++;
        }
        return num;
    }
};