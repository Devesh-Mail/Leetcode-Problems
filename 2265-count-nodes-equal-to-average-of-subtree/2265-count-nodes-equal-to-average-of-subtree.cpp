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
    int trueCnt=0;
    int averageOfSubtree(TreeNode* root) {
        auto n =find(root);
        return trueCnt;
    }
private:
    pair<int,int> find(TreeNode* root){
        if(root->left==nullptr && root->right==nullptr){
            trueCnt++;
            return make_pair(root->val,1);
        }
        int curr=root->val;
        int cnt=1;
        if(root->right!=NULL){
            auto p=find(root->right);
            curr+=p.first;
            cnt+=p.second;
        }
        if(root->left!=NULL){
            auto p=find(root->left);
            curr+=p.first;
            cnt+=p.second;
        }
        if(curr/cnt==root->val){
            trueCnt++;
        }
        cout<<cnt<<" "<<curr<<" "<<root->val<<endl;
        return make_pair(curr,cnt);
    }
};