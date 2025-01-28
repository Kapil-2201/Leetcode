/**
 * Definition for a binary tree node.
 * public class TreeNode {
 * int val;
 * TreeNode left;
 * TreeNode right;
 * TreeNode() {}
 * TreeNode(int val) { this.val = val; }
 * TreeNode(int val, TreeNode left, TreeNode right) {
 * this.val = val;
 * this.left = left;
 * this.right = right;
 * }
 * }
 */
class Solution {
    public boolean preOrder(TreeNode root, int targetSum, int sum) {
        if (root == null)
            return false;
        if (sum + root.val == targetSum && root.right == null && root.left == null)
            return true;

        return preOrder(root.left, targetSum, sum + root.val) ||
                preOrder(root.right, targetSum, sum + root.val);

    }

    public boolean hasPathSum(TreeNode root, int targetSum) {
        return preOrder(root, targetSum, 0);
    }
}