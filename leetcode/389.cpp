class Solution {
public:
    char findTheDifference(string s, string t) {
        char result;
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < s.length(); i++) {
            sum1 += int(s[i]);
            sum2 += int(t[i]);
        }
        sum2 += t[t.length() - 1];
        result = char(sum2 - sum1);
        return result;
    }
};