class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size()==0)
            return 0;
        int m=needle.size();
        int n=haystack.size();
        for(int i=0;i<n-m+1;i++)
        {
            if (haystack.substr(i,m)==needle)
                return i;
        }
        return -1;
    }
};
