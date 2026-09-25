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
    int ans=0;
    private void calc(TreeNode root,int num){
        num*=10;
        num+=root.val;
        if(root.left==null && root.right==null){
            ans+=num;
            System.out.println("A");
            return;
        }
        if(root.left!=null){
            System.out.println("B");
            calc(root.left,num);
        }
        if(root.right!=null){
            System.out.println("C");
            calc(root.right,num);
        }
    }
    public int sumNumbers(TreeNode root) {
        calc(root,0);
        return ans;
    }
}