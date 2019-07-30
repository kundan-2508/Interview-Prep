
https://leetcode.com/problems/hamming-distance/submissions/
https://www.geeksforgeeks.org/hamming-distance-between-two-integers/

class Solution {
public:
    int hammingDistance(int x, int y) {
        int k = x^y;
        int cnt = 0;
        while(k != 0)
        {
            cnt++;
            k &= (k-1);
        }
        return cnt;
    }
};
