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
    void postorder(TreeNode* curr, vector<int>& vec){
        if(!curr){
            return;
        }
        
        postorder(curr->left, vec);
        postorder(curr->right, vec);
        
        vec.push_back(curr->val);
        return;
    }
    
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> vec;
        postorder(root, vec);
        
        return vec;
    }
};