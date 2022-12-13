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

/*
       if (!root) return {};
        vector<int> v;
        v.push_back(root->val);
        for (int i=0; i<root->children.size(); i++) {
            vector<int>v1 = preorder(root->children[i]);
            v.insert(v.end(), v1.begin(), v1.end());
        }
        return v;
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        if(!root){
            return {};
        }

        std::stack<Node *> s;
        std::vector<int> res;
        s.emplace(root);
        while(!s.empty()){
            Node * node = s.top();
            s.pop();
            res.push_back(node->val);
            for(int i =node->children.size()-1; i >= 0; i-- ){
                s.push(node->children[i]);
            }
        }
        return res;
    }
};