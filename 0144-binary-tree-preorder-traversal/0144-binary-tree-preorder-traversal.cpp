/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    void preorder(TreeNode* curr, vector<int>& vec){
        
        if(!curr){
            return;
        }
        
        vec.push_back(curr->val);
        preorder(curr->left, vec);
        preorder(curr->right, vec);
        
        return;
    }
    
public:
    vector<int> preorderTraversal(TreeNode* root) {
       
        vector<int> vec;
        preorder(root, vec);
        
        return vec;
    }
};