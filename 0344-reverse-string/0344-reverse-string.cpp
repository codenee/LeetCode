class Solution {
public:
    //solution 1
    void reverseString(vector<char>& s) {
        
        stack<char> st;
        for(const auto& it: s){
            st.push(it);
        }
        s.clear();
        while(!st.empty()){
            char ch = st.top();
            st.pop();
            s.emplace_back(ch);
                        
        }
    }
    
    //solution 2
    void reverseString2(vector<char>& s) {
        int i = 0, j = s.size() - 1;
        while( i < j){
            swap( s[i++], s[j--]);
        }
    }
    
    //solution 3
   void reverseString3(vector<char>& s) {
        
        reverse(s.begin(), s.end());     
   }
    
};