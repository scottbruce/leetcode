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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* cur = dummy;
        int carry = 0;

        while(l1 || l2){
            int val1 = 0;
            int val2 = 0;
            if(l1){
                val1 = l1->val;
            }
            if(l2){
                val2 = l2->val;
            }

            int sum = val1 + val2 + carry;
            carry = sum / 10;
            cur->next = new ListNode(sum % 10);
            cur = cur->next;

            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }

        if(carry) cur->next = new ListNode(1);
        return dummy->next;
    }
};
