https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool check(string s);
    bool isValid(string s) {
        return check(s);
    }
};

bool Solution::check(string s)
{
    stack<char> st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(' || s[i]=='[' || s[i]=='{')
        {
            st.push(s[i]);
            continue;
        }
        if(st.empty())
            return false;
        char ch;
        switch(s[i])
        {
            case ')':
                ch = st.top();
                st.pop();
                if(ch=='[' || ch=='{')
                    return false;
                break;
            case ']':
                ch = st.top();
                st.pop();
                if(ch=='(' || ch=='{')
                    return false;
                break;
            case '}':
                ch = st.top();
                st.pop();
                if(ch=='[' || ch=='(')
                    return false;
                break;
        }
    }
    return st.empty();
}
