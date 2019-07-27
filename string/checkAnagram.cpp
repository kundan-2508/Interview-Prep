
https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
        {
            return false;
        }
        int a[26] = {0};
        for(int i=0;i<s.size();i++)
        {
            a[s[i]-'a']++;
            a[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(a[i]>0)
                return false;
        }
        return true;
    }
};
