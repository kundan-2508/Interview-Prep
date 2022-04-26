class Solution {
public:
    int romanToInt(string s) {
        map<char,int> m;
        m.insert({'I',1});
        m.insert({'V',5});
        m.insert({'X',10});
        m.insert({'L',50});
        m.insert({'C',100});
        m.insert({'D',500});
        m.insert({'M',1000});
        
        int res = (m.find(s[s.size()-1]))->second;
        
        for(int i=s.size()-2;i>=0;i--){
            if((m.find(s[i]))->second < (m.find(s[i+1]))->second){
                res -= (m.find(s[i]))->second;
            }
            else{
                res += (m.find(s[i]))->second;
            }
        }
        return res;
    }
};
