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
    ListNode* swapPairs(ListNode* head) {
         if(!head || !head->next) return head; 
        ListNode* temp = new ListNode();
        
        ListNode* prevNode=temp;
        ListNode* curNode=head;
        
        while(curNode && curNode->next){
            prevNode->next = curNode->next;
            curNode->next = prevNode->next->next;
            prevNode->next->next = curNode;
            
            prevNode = curNode;
            curNode = curNode->next;
        }
        
        return temp->next;
    }
};