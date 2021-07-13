class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i,p=0;
        for(i=0;i<=30;i++)
        {
            p=pow(2,i);
            if(n==p)
                return true;
        }
        return false;
        
    }
};