/**
 * Definition for singly-linked list.
 * public class ListNode {
 * int val;
 * ListNode next;
 * ListNode() {}
 * ListNode(int val) { this.val = val; }
 * ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public void reorderList(ListNode head) {
        ListNode fast = head;
        ListNode slow = head;
        while (fast != null && fast.next != null) {
            fast = fast.next.next;
            slow = slow.next;
        }

        ListNode left = slow.next;
        slow.next = null;
        ListNode right = null;

        while (left != null) {
        ListNode next = left.next;
            left.next = right;

            right = left;
            left = next;
        }
        
    
        left = head;

        while (right != null && left != null) {
        ListNode Lnext = left.next;
        ListNode Rnext = right.next;
           left.next = right;
           right.next = Lnext;

           left = Lnext;
           right = Rnext;
        }

    }
}