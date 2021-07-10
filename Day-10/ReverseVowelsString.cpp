class Solution {
public:
    string reverseVowels(string s) {
        int l = 0;
        int r = s.length();
        while (l < r) {
            if (!isVowel(s[l])) ++l;
            else if (!isVowel(s[r])) --r;
            else {
                char lc = s[l];
                s[l++] = s[r];
                s[r--] = lc;   
            }
        }
        return s;
    }

    bool isVowel(char ch) {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		    return true;
	    return false;
    }
};
