
https://leetcode.com/problems/trapping-rain-water/

class Solution {
public:
    int trap(vector<int>& height) {
        
        if(height.empty())
        {
            return 0;
        }
        int len = height.size();
        vector<int> left(len);
        vector<int> right(len);
        int water = 0;
        
        left[0] = height[0];
        right[len-1] = height[len-1];
        
        for(int i=1;i<len;i++)
        {
            left[i] =  max(left[i-1],height[i]);
        }
        for(int i=len-2;i>=0;i--)
        {
            right[i] =  max(right[i+1],height[i]);
        }
        for(int i=0;i<len;i++)
        {
            water += (min(left[i],right[i]) - height[i]);
        }
        return water;
    }
};
