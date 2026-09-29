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
    public record Pair<Node,num>(Node first,num second){}
    public int sumNumbers(TreeNode root) {
        Queue<Pair<TreeNode,Integer>> que=new LinkedList<>();
        Pair<TreeNode,Integer> pair=new Pair(root,root.val);
        que.add(pair);
        int ans=0;
        while(!que.isEmpty()){
            int size=que.size();
            while(size-- >0){
                Pair<TreeNode,Integer> p=que.poll();
                TreeNode node=p.first();
                int num=p.second();
                if(node.left==null && node.right==null){
                    ans+=num;
                }
                if(node.left!=null){
                    Pair<TreeNode,Integer> t=new Pair<>(node.left,(num*10)+node.left.val);
                    que.add(t);
                }
                if(node.right!=null){
                    Pair<TreeNode,Integer> t=new Pair<>(node.right,(num*10)+node.right.val);
                    que.add(t);
                }
            }
        }
        return ans;
    }
}