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
    void dfs(TreeNode* curr, vector<int>& vec){
        
        if(!curr){
            return;
        }
        
        if( !(curr->left || curr->right)){
            vec.push_back(curr->val);
        }
        
        dfs(curr->left, vec);
        dfs(curr->right, vec);
    }
    
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        vector<int> v2;
        
        dfs(root1, v1);
        dfs(root2, v2);
        
        if(v1 == v2)
            return true;
        
        return false;
        
    }
};