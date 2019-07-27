https://www.interviewbit.com/problems/reverse-integer/
https://leetcode.com/problems/reverse-integer/

class Solution {
public:
    int reverse(int x) {
        int sum = 0;
        int rem;
        while(x!=0)
        {
            rem = x%10;
            x /= 10;
            if(
                (sum > INT_MAX/10) || 
                (sum < INT_MIN/10) || 
                (sum == INT_MAX/10 && rem >7) || 
                (sum == INT_MIN/10 && rem <-8)
            )
            {
                return 0;
            }
            sum = sum*10 + rem;
        }
        return sum;
    }
};
