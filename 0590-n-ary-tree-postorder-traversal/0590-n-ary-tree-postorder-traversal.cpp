/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
   
    vector<int> postorder(Node* root) {
      if( !root ){
          return {};
      }
      
        std::vector<int> result;
        std::stack<pair<Node*, int>> st;
        st.emplace(root, 0);
        while(!st.empty()){
            auto &[node, index] = st.top();
            if(index == node->children.size()){
                result.push_back(node->val);
                st.pop();
            }
            else{
                st.emplace(node->children[index++], 0);
            }
        }
        return result;
    }
};