https://leetcode.com/problems/add-two-numbers/

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
    
    ListNode* calculateSum(ListNode* curr1, ListNode* curr2);
    int getCount(ListNode* temp);
    
    ListNode* addTwoNumbers(ListNode* head1, ListNode* head2) {
    
        int cnt1 = getCount(head1);
        int cnt2 = getCount(head2);
        
        ListNode* res;
        
        if(cnt1 > cnt2)
        {
            res = calculateSum(head1, head2);
        }
        else
        {
            res = calculateSum(head2, head1);
        }
                
        return res;
    }
};

int Solution::getCount(ListNode* temp)
{
    int cnt = 0;
    while(temp != NULL)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

ListNode* Solution::calculateSum(ListNode* curr1, ListNode* curr2)
{
    int carry = 0;
    ListNode* dummy = new ListNode(0);
    ListNode* temp = dummy;
    while(curr1 != NULL && curr2 != NULL)
    {
        int sum = curr1->val + curr2->val + carry;
        temp->next = new ListNode(sum%10);
        temp = temp->next;
        carry = sum/10;
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    while(curr1 != NULL)
    {
        int sum = curr1->val + carry;
        temp->next = new ListNode(sum%10);
        temp = temp->next;
        carry = sum/10;
        curr1 = curr1->next;
    }
    if(carry)
    {
        temp->next = new ListNode(carry);
    }
    return dummy->next;
}
