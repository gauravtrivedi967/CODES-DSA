class Solution {
public:
    string convertToTitle(int n) {
       string re="";
       while(n>0)
       {
           char s=(char)((n-1)%26+'A');
           re=s+re;
           n=(n-1)/26;
       }
        return re;
    }
};