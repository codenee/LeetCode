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
    vector<double> averageOfLevels(TreeNode* root) {
        
        queue<TreeNode* > que;
        que.push(root);
        vector<double> ans;
        while(que.size()){
            double qlen = que.size(), row = 0;
            for(int i = 0; i < qlen; i++){
                TreeNode* curr = que.front();
                que.pop();
                row += curr->val;
                if(curr->left){
                    que.push(curr->left);
                }
                if(curr->right){
                    que.push(curr->right);
                }
            }
             ans.push_back(row/qlen);
        }
        return ans;        
    }
};