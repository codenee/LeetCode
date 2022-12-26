class Solution {
public:
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
};