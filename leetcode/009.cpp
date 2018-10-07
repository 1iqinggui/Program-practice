class Solution {
public:
    bool isPalindrome(int x) {
        int t = 0, sum = x;
        
        if (x < 0)
            return false;
        if (x < 10)
            return true;
        while (x != 0) {
            t = t * 10 + x % 10;
            x /= 10;
        }
        if (t == sum)
            return true;
        else
            return false;
    }
};