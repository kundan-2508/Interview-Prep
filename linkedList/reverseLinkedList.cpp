https://leetcode.com/problems/reverse-linked-list/solution/
https://www.geeksforgeeks.org/reverse-a-linked-list/


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
    ListNode* reverseList(ListNode* head) {
        
        if(head == NULL)
            return head;
        ListNode* temp;
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr != NULL)
        {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
};
