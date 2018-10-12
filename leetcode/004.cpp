class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        int mid = (nums1.size() + nums2.size()) / 2;
        while (!(nums1.empty() && nums2.empty())) {
            if (nums2.empty() || (!nums1.empty() && nums1[nums1.size() - 1] > nums2[nums2.size()-1])) {
                nums.push_back(nums1[nums1.size() - 1]);
                nums1.pop_back();
            } else {
                nums.push_back(nums2[nums2.size() - 1]);
                nums2.pop_back();
            }            
        }
        if (nums.size() % 2 == 0)        
            return (nums[mid] + nums[mid-1]) / 2.0;
        else 
            return double(nums[mid]);
    }
};