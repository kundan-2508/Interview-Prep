https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1
https://www.geeksforgeeks.org/write-a-function-to-get-the-intersection-point-of-two-linked-lists/
https://leetcode.com/problems/intersection-of-two-linked-lists/

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
    int countNode(ListNode* temp);
    ListNode* intersectionNode(int diff,ListNode* first,ListNode* second);
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        
        if(headA == NULL || headB == NULL)
        {
            return NULL;
        }
        
        int cnt1 = countNode(headA); 
        int cnt2 = countNode(headB);
        int diff = (cnt1>cnt2)?(cnt1-cnt2):(cnt2-cnt1);
        
        if(cnt1 > cnt2)
        {
            return intersectionNode(diff,headA,headB);
        }
        else
        {
            return intersectionNode(diff,headB,headA);
        }
    }
};

ListNode* Solution::intersectionNode(int diff,ListNode* first,ListNode* second)
{
    for(int i=0;i<diff;i++)
    {
        first = first->next;
    }
    while(first != NULL && second != NULL)
    {
        if(first == second)
        {
            return first;
        }
        first = first->next;
        second = second->next;
    }
    return NULL;
}

int Solution::countNode(ListNode* temp)
{
    int cnt = 0;
    while(temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
