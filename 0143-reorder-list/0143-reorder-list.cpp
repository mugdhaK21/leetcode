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
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while(fast and fast->next){
            slow = slow->next;
            fast = fast->next->next;
            
        }
        ListNode* second = slow->next;
        slow->next = nullptr;
        ListNode* prev = nullptr;
        while(second){
            ListNode* temp = second->next;
            second->next = prev;
            prev = second;
            second = temp;
        }
        second = prev;
        while (second) {
            ListNode* temp1 = head->next;
            ListNode* temp2 = second->next;
            head->next = second;
            second->next = temp1;
            head = temp1;
            second = temp2;
        }
        
    }
};