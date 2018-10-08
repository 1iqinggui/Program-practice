class Solution {
public:
    bool isUgly(int num) {
        do {
            if (num % 2 == 0)
                num /= 2;
            else if (num % 3 == 0)
                num /= 3;
            else if (num % 5 == 0)
                num /= 5;
            else
                break;
        } while (num > 1);
        if (num != 1) 
            return false;
        return true;
    }
};