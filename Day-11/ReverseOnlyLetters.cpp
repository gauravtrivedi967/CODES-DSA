class Solution {
public:
    string reverseOnlyLetters(string S) {
        string letters;
        for (auto &c : S) {
            if ((65 <= c && c <= 90) || (97 <= c && c <= 122)) letters += c;
        }
        std::reverse(letters.begin(), letters.end());
        int k = 0;
        for (auto &c : S) {
            if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
                c = letters[k++];
        }
        return S;
    }
};
