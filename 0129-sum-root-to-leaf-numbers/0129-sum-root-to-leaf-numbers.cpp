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
    int sumNumbers(TreeNode* root) {
        queue<pair<TreeNode* , int>> que;
        que.push({root,root->val});
        int ans=0;
        while(!que.empty()){
            int size=que.size();
            while(size--){
                auto[node,num]=que.front();
                que.pop();
                if(node->left==NULL && node->right==nullptr)
                    ans+=num;
                if(node->left!=nullptr)
                    que.push({node->left,(num*10)+node->left->val});
                if(node->right!=nullptr)
                    que.push({node->right,(num*10)+node->right->val});
            }
        }
        return ans;
    }
};