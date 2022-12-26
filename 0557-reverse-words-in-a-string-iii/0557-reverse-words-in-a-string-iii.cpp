class Solution {
private:
    void parseString(string& str, vector<string>& vec, const string& delimiter){
        
        int pos = 0;
        while( (pos = str.find(delimiter)) != string::npos ){
            
            string tmp = str.substr(0, pos);
            vec.push_back(tmp);
            str.erase(0, pos + delimiter.length());
        }
        vec.push_back(str);
        
    }
public:
    string reverseWords(string s) {
        
        vector<string> vec;
        string delimiter(" ");
        parseString(s, vec, delimiter);
        
        string result("");
        for(const auto& it : vec){
            
            string tmp = it;
            int i = 0, j = it.size() -1;
            while( i < j){
                swap(tmp[i++], tmp[j--]);    
            }
            result += tmp + " ";
        }
        result.erase(result.size()-1);
        return result;
    }
};