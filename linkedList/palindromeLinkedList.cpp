https://leetcode.com/problems/palindrome-linked-list/

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
    ListNode* reverse(ListNode* temp);
    bool isPalindrome(ListNode* head) {
        ListNode* first = head;
        ListNode* second = head;
        //travel upto midlle
        while(second != NULL && second->next != NULL)
        {
            first = first->next;
            second = second->next->next;
        }
        
        first = reverse(first); // after reversing first will point the last node 
        second = head; // it will travel from the start
        
        while(first != NULL)
        {
            if(first->val != second->val)
            {
                return false;
            }
            first = first->next;
            second = second->next;
        }
        return true;
    }
};

ListNode* Solution::reverse(ListNode* curr)
{
    ListNode* prev = NULL;
    while(curr != NULL)
    {
        ListNode* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}
