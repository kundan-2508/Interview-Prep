
https://leetcode.com/problems/middle-of-the-linked-list/

// solution 1

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
    ListNode* middleNode(ListNode* head) {
        ListNode* mid = head;
        int cnt = 0;
        while(head != NULL)
        {
            if(cnt&1)
            {
                mid = mid->next;
            }
            cnt++;
            head = head->next;
        }
        return mid;
    }
};

// solution 2

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
    ListNode* middleNode(ListNode* head) {
        ListNode* first = head;
        ListNode* second = head;
        while(second != NULL && second->next != NULL)
        {
            first = first->next;
            second = second->next->next;
        }
        return first;
    }
};
