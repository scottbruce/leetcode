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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return NULL;
        
        ListNode* cur = head;
        int n = 0;
        while(cur){
            ++n;
            cur = cur->next;
        }
        k = k % n;
        ListNode* fast = head;
        ListNode* slow = head;

        for(int i = 0; i < k; ++i){
            if(fast)fast = fast->next;
        }
        if(!fast) fast = head;
        while(fast->next){
            fast = fast->next;
            slow = slow->next;
        }
        fast->next = head;
        fast = slow->next;
        slow->next = NULL;

        return fast;
    }
};
