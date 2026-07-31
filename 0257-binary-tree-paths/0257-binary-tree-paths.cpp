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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string str="";
        str+=to_string(root->val);
        if(root->left !=nullptr)
            tree(ans,root->left,str);
        if(root->right !=nullptr)
            tree(ans,root->right,str);
        if(root->left ==nullptr && root->right==nullptr)
            ans.push_back(str);
        return ans; 
    }
private:
    void tree(vector<string> &ans,TreeNode* root,string res){
        res+="->";
        res+=to_string(root->val);
        if(root->left==nullptr && root->right==nullptr){
            ans.push_back(res);
            return;
        }
        if(root->left!=nullptr)
            tree(ans,root->left,res);
        if(root->right !=nullptr)
            tree(ans,root->right,res);
    }
};