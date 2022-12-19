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
public:
    int sumRootToLeaf(const TreeNode* root, uint32_t sum = 0) {
        if(!root){
            return 0;
        }
        
        sum |= root->val;
        if(!root->left && !root->right){
            return sum;
        }
        sum <<= 1;
        
        return sumRootToLeaf(root->left, sum) + sumRootToLeaf(root->right, sum);        
    }
};