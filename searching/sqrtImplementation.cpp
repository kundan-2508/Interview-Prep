https://leetcode.com/problems/sqrtx/
https://www.geeksforgeeks.org/square-root-of-an-integer/
https://practice.geeksforgeeks.org/problems/count-squares/0


class Solution {
public:
    int bSearch(int x, int low, int high);
    int mySqrt(int x) {
        return bSearch(x,1,x/2);
    }
};

int Solution::bSearch(int x, int low, int high)
{
    if(x==0 || x==1)
        return x;
    int ans = 1;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(mid == x/mid)
        {
            return mid;
        }
        else if(mid < x/mid)
        {
            low = mid + 1;
            ans = mid;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}
