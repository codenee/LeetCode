class Solution {
public:
    int countGoodSubstrings(string s) {
        
        if(s.size() < 3){
            return 0;
        }
        
        int result = 0;
        
        map<char, int> m;        
        for(int i = 0; i <= s.size()-3; i++){
            m[s[i]]++;
            m[s[i+1]]++;
            m[s[i+2]]++;
            if(m.size() == 3){
                result++;
            }
            m.clear();
        }
        
        return result;
    }
};