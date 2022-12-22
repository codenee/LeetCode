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
    bool Recur(TreeNode* curr, int nValue){
        if(!curr){
            return true;
        }
        if(curr->val != nValue){
            return false;
        }
        return Recur(curr->left, nValue) && Recur(curr->right, nValue);
    }
    
public:
    bool isUnivalTree(TreeNode* root) {
        int n = root->val;
        return Recur(root, n);
    }
};