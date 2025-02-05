/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteMiddle(ListNode head) {
        if(head == null || head.next == null) return null;
        ListNode slow = head;
        ListNode fast = head;


        while(fast!=null && fast.next != null){
            fast = fast.next.next;
            slow = slow.next;
        }

        fast = head;
        while(fast != slow){
            if(fast.next == slow){
                fast.next = slow.next;
                break;
            }
            fast = fast.next;
        }

        return head;
    }
}