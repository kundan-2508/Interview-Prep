https://leetcode.com/problems/remove-duplicates-from-sorted-list/solution/
https://www.hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list/problem
https://www.geeksforgeeks.org/remove-duplicates-from-a-sorted-linked-list/

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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        while(temp != NULL && temp->next != NULL)
        {
            if(temp->val == temp->next->val)
            {
                ListNode* ref = temp->next;
                temp->next = ref->next;
                delete(ref);
            }
            else
            {
                temp = temp->next;
            }
        }
        return head;
    }
};
