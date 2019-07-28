https://leetcode.com/problems/power-of-four/
https://www.geeksforgeeks.org/find-whether-a-given-number-is-a-power-of-4-or-not/

class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num == 1)
            return true;
        if(num < 3)
            return false;
        if((num &(num-1))==0)
        {
            int cnt = 0;
            while(num>1)
            {
                num /= 2;
                cnt++;
            }
            return (cnt%2==0)?true:false;
        }
        return false;
    }
};
