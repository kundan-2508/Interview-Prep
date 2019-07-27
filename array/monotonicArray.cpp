https://leetcode.com/problems/monotonic-array/

class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int st = A[0];
        int i;
        int incFlag = 1, decFlag = 1;
        for(i=1;i<A.size();i++)
        {
            if(A[i]>A[i-1])
            {
                incFlag = 0;
            }
            if(A[i]<A[i-1])
            {
                decFlag = 0;
            }
        }
        return incFlag || decFlag;
    }
};
