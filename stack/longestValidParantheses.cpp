https://leetcode.com/problems/longest-valid-parentheses/

class Solution {
public:
    int longestParentheses(string s);
    int longestValidParentheses(string s) {
        return longestParentheses(s);
    }
};
int Solution::longestParentheses(string s)
{
    stack<int> st;
    st.push(-1);
    int i, res = 0;
    int n = s.size();
    for(i=0;i<n;i++)
    {
        if(s[i]=='(')
            st.push(i);
        else
        {
            st.pop();
            if(!st.empty())
            {
                res = max(res,i-st.top());
            }
            else
                st.push(i);
        }
    }
    return res;
}
