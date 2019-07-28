
https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle/problem
https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1
https://leetcode.com/problems/linked-list-cycle/
https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/

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
    bool hasCycle(ListNode *head) {
        ListNode* first = head;
        ListNode* second = head;
        while(second != NULL && second->next != NULL)
        {
            first = first->next;
            second = second->next->next;
            if(first == second)
                return true;
        }
        return false;
    }
};
