class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int result = nums[0] + nums[1] + nums[2];
        int min = abs(nums[0] + nums[1] + nums[2] - target);
        for (int i = 0; i < nums.size()-2; i++) {
            for (int j = i+1; j < nums.size()-1; j++) {
                for(int k = j+1; k < nums.size(); k++) {
                    if (abs(nums[i] + nums[j] + nums[k] - target) < min) {
                        min = abs(nums[i] + nums[j] + nums[k] - target);
                        result = nums[i] + nums[j] + nums[k];
                    }                       
                }
            }
        }
        return result;
    }
};