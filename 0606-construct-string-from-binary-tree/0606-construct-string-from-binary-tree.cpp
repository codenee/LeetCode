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
    void tree2str(TreeNode* curr, string& str){
        if(!curr){
            return;
        }
        str += to_string(curr->val);
        if(curr->left){
            str += '(';
            tree2str(curr->left, str);
            str += ')';
        }
        
        if(curr->right){
            if(!curr->left){
                str += "()";
             }
            str += '(';
            tree2str(curr->right, str);
            str += ')';
        }
        return;
    }
    
public:
    string tree2str(TreeNode* root) {
        string str("");
        tree2str(root, str);
        return str;
    }
};