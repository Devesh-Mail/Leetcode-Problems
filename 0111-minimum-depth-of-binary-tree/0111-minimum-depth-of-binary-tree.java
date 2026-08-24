/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int ans=100000;
    public int minDepth(TreeNode root) {
        if(root==null)
            return 0;
        check(root,1);
        return ans;
    }
    private void check(TreeNode root,int count){
        if(root.left==null && root.right==null){
            ans=Math.min(ans,count);
            return;
        }
        if(root.left!=null)
            check(root.left,count+1);
        if(root.right!=null)
            check(root.right,count+1);
    }
}