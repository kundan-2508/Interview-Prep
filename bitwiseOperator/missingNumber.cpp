https://www.geeksforgeeks.org/find-the-missing-number/
https://leetcode.com/problems/missing-number/
https://practice.geeksforgeeks.org/problems/missing-number-in-array/0

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int val=0;
        for(int i=0;i<=len;i++)
        {
            val ^= i;
        }
        for(int i=0;i<len;i++)
        {
            val ^= nums[i];
        }
        return val;
    }
};
