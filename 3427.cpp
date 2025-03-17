class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int sum = 0;
        int len = nums.size();
        for (int i = 0; i < len; i++) sum += vectorSum(nums, max(0, i - nums[i]), i);
        return sum;
    }

    int vectorSum(vector<int>& nums, int start, int end) {
        int sum = 0;
        for (int i = start; i <= end; i++) sum += nums[i];
        return sum;
    }
};
