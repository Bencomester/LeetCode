class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (target <= nums[0]) return 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] < target && nums[i + 1] >= target) return i + 1;
        }
        return nums.size();
    }
};