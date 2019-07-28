https://leetcode.com/problems/power-of-two/
https://www.geeksforgeeks.org/program-to-find-whether-a-no-is-power-of-two/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0)
            return false;
        return (n && !(n&(n-1)));
    }
};
