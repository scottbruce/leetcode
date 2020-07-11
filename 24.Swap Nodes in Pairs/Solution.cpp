/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* cur = dummy;
        while(cur->next && cur->next->next){
            ListNode* t = cur->next->next;
            cur->next->next = t->next;
            t->next = cur->next;
            cur->next = t;
            cur = t->next;
        }
        return dummy->next;
    }
};
