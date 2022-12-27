class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        if(s1.size() > s2.size())
            return false;
        
        vector<int> vec(26, 0);
        for(const auto& it : s1){
            vec[it -'a']++;
        }
        
        vector<int> vec2(26, 0);
        int l = 0, r = 0;
        while( r < s2.size()){
            vec2[s2[r] - 'a']++;
            if(r - l + 1 == s1.size()){
                if(vec == vec2){
                    return true;
                }
            }
            if(r - l + 1 < s1.size()){
                r++;
            }
            else{
                vec2[s2[l] - 'a']--;
                l++;
                r++;
            }
        }
        return false;
        
    }
};