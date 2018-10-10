class Solution {
public:
    string reverseOnlyLetters(string S) {
        int len = S.length();
        int k = len - 1;
        string result;
        for(int i = 0; i < len;) {
            if (!isalpha(S[i])) {
                result += S[i];
                i++;
            } 
            else if (isalpha(S[k])) {
                result += S[k];
                k--;
                i++;
            }
            else 
                k--;
        }
        return result;
    }
};