
https://leetcode.com/problems/plus-one/
https://www.interviewbit.com/problems/add-one-to-number/

class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
        int n = v.size();
        if(v[n-1]>=0 && v[n-1]<9)
        {
            v[n-1] += 1;
        }
        else
        {
            reverse(v.begin(),v.end());
            int carry = 1;
            int sum = 0;
                for(int i=0;i<n;i++)
                {
                    sum = v[i] + carry;
                    v[i] = sum%10;
                    carry = sum/10;
                }
            if(carry==1)
                v.push_back(1);
            reverse(v.begin(),v.end());
        }
        return v;
    }
};
