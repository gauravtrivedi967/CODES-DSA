class Solution {
public:
    bool isValid(string s) {
        stack<char> res;
        for (int i=0;i<s.length();i++)
        {
            if (s[i]=='('||s[i]=='['||s[i]=='{') res.push(s[i]);
            else 
            {
                if (res.empty()) return false;
                char tmp=res.top();
                res.pop();
                if (s[i]==')'&&tmp!='(') return false;
                if (s[i]==']'&&tmp!='[') return false;
                if (s[i]=='}'&&tmp!='{') return false;
            }
        }
        if (!res.empty()) return false;
        return true;
    }
};