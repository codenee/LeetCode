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
    vector<int> preorder2(Node* root) {
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

    vector<int> preorder(Node* root) {
        if(!root){
            return {};
        }
        
        std::vector<int> res;
        res.push_back(root->val);
        for(int i = 0; i < root->children.size(); i++){
            std::vector<int> v1 = preorder(root->children[i]);
            res.insert(res.end(), v1.begin(), v1.end());
        }

        return res;
    }
};