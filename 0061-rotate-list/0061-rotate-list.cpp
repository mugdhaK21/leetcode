/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
         if(head == NULL || head->next == NULL || k<=0){
             return head;
             
         }
            
        ListNode* last = head;
        int length = 1;
        while(last->next != NULL){
            last =last->next;
            length++;
        }
        
        last->next = head;
        int rotations = k% length;
        int skip = length- rotations;
        ListNode* newLast = head;
        for(int i=0;i<skip-1;i++){
            newLast = newLast->next;
        }
        head= newLast->next;
        newLast->next=NULL;
        return head;
        
        
        
    }
};