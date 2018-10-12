class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int result = 0;
        if (nums[0] >= target)
            return 0;
        else if (nums[nums.size()-1] < target)
            return nums.size();
        else {
            do {
                result++;
            } while (nums[result] < target);
        }
        return result;
    }
};