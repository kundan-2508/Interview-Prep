
https://leetcode.com/problems/counting-bits/

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> v(num);
        int i;
        v.push_back(0);
        for(i=1;i<=num;i++)
        {
            v[i] = v[i&(i-1)]+1;   
        }
        return v;
    }
};
