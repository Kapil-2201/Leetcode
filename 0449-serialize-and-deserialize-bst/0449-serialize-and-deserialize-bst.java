/**
 * Definition for a binary tree node.
 * public class TreeNode {
 * int val;
 * TreeNode left;
 * TreeNode right;
 * TreeNode(int x) { val = x; }
 * }
 */
public class Codec {

    // Encodes a tree to a single string.
    public String serialize(TreeNode root) {
        StringBuilder s = new StringBuilder();
        Queue<TreeNode> queue = new LinkedList<>();
        queue.add(root);
        while (!queue.isEmpty()) {
            TreeNode node = queue.poll();
            if (node == null)
                s.append("#$");
            else {
                s.append(node.val + "$");
                queue.add(node.left);
                queue.add(node.right);
            }

        }
        return s.toString();

    }

    // Decodes your encoded data to tree.
    public TreeNode deserialize(String data) {
        if (data == null || data.length() == 0) return null;
        String[] stringNode = data.split("\\$");
        Queue<TreeNode> queue = new LinkedList<>();
        TreeNode node = stringNode[0].equals("#") ? null : new TreeNode(Integer.parseInt(stringNode[0]));
        queue.add(node);
        for (int i = 1; i < stringNode.length; i++) {
            TreeNode parent = queue.poll();
            if (!stringNode[i].equals("#")) {
                // System.out.println(Integer.parseInt(stringNode[i]));
                TreeNode left = new TreeNode(Integer.parseInt(stringNode[i]));
                parent.left = left;
                queue.add(left);
            }
            if (!stringNode[++i].equals("#")) {
                TreeNode right = new TreeNode(Integer.parseInt(stringNode[i]));
                parent.right = right;
                queue.add(right);
            }

        }

        return node;
    }
}

// Your Codec object will be instantiated and called as such:
// Codec ser = new Codec();
// Codec deser = new Codec();
// String tree = ser.serialize(root);
// TreeNode ans = deser.deserialize(tree);
// return ans;