class Solution {
public:
    string addBinary(string a, string b) {
     int c=0,i,j;
        string ans;
        for( i=a.length()-1, j=b.length()-1;i>=0||j>=0;i--,j--){
          
            int n1=i < 0 ? 0 : a[i] - '0';
            int n2=j < 0 ? 0 : b[j] - '0';
            switch(n1+n2+c){
                case 0:
                case 2:
                    ans.push_back('0');
                    break;
                case 1:
                case 3:
                    ans.push_back('1');
                    break;
            }
 c = (n1 + n2 + c) > 1 ? 1 : 0;
        }
        if(c > 0) ans.push_back('1');
        reverse(ans.begin(),ans.end());
        return ans;
    }
};