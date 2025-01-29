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
    public List<List<Integer>> levelOrder(Node root) {
        Queue<Node> queue = new LinkedList<>();
        List<List<Integer>> list = new ArrayList<>();
        if(root == null) return list;
        queue.add(root);
        while (!queue.isEmpty()) {
            int size = queue.size();
            List<Integer> slist = new ArrayList<>();
            while (size > 0) {
                Node node = queue.poll();
                slist.add(node.val);
            for(Node child: node.children){
                queue.add(child);
            }
                size--;
            }
            list.add(slist);
        }
        return list;
    }
}