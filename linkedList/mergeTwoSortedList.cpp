
https://leetcode.com/problems/merge-two-sorted-lists/

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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
     
        while(head1 != NULL && head2 != NULL)
        {
            if(head1->val < head2->val)
            {
                ListNode* temp = new ListNode(head1->val);
                curr->next = temp;
                curr = curr->next;
                head1 = head1->next;
            }
            else
            {
                ListNode* temp = new ListNode(head2->val);
                curr->next = temp;
                curr = curr->next;
                head2 = head2->next;
            }
        }
        while(head1 != NULL)
        {
            ListNode* temp = new ListNode(head1->val);
            curr->next = temp;
            curr = curr->next;
            head1 = head1->next;
        }
        while(head2 != NULL)
        {
            ListNode* temp = new ListNode(head2->val);
            curr->next = temp;
            curr = curr->next;
            head2 = head2->next;
        }
        return dummy->next;
    }
};
