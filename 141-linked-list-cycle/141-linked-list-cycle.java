/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
        ListNode t1=head;
        ListNode t2=head;
        while(t1!= null && t2!=null){
            t1=t1.next;
            t2=t2.next;
            if(t2!=null){
                t2=t2.next;
            }else{
                break;
            }
            if(t1==t2){
                return true;
            }
        }
        return false;

    }
}