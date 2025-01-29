/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> children;

    public Node() {}

    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, List<Node> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    public int maxDepth(Node root) {
        Queue<Node> queue = new LinkedList<>();
        int level = 0;
        if (root == null)
            return level;
        queue.add(root);
        while (!queue.isEmpty()) {
            int size = queue.size();
            while (size > 0) {
            Node node = queue.poll();
                for (Node child : node.children) {
                    queue.add(child);
                }
                size--;
            }
                level++;
        }
        return level;
    }
}