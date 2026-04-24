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
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> result= new ArrayList<>();
        if(root==null)
        return result;
        Queue<TreeNode> q=new LinkedList<>();
        q.add(root);
        int ltor=1;
        while(!q.isEmpty()){
            int s=q.size();
            int f=0;
            int l=s-1;
            List<Integer> temp=new ArrayList<>(Collections.nCopies(s,0));
            while(s>0){
                TreeNode node=q.poll();
                if(ltor==1){
                    temp.set(f,node.val);
                    f++;
                }
                else{
                    temp.set(l,node.val);
                    l--;
                }
                if(node.left!=null)
                q.add(node.left);
                if(node.right!=null)
                q.add(node.right);
                s--;
            }
            ltor=1-ltor;
            result.add(temp);
        }
        return result;
    }
}