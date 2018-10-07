class Solution {
public:
    int countPrimes(int n) {
        vector<int> nums;
        if (n <= 2) 
            return 0;
        if (n == 3)
            return 1;
    
        int k = 3, flag = 0;
        nums.push_back(2);
        while (k < n) {
            flag = 0;
            for (int i = 0; i < nums.size(); i++) {
                if (k % nums[i] == 0) {
                    flag = 1;
                    break;
                } 
                else if (nums[i] * nums[i] > n)
                    break;
                else
                    continue;
            }
            if (flag == 0)
                nums.push_back(k);
            k++;
        }  
        return nums.size();
    }
};