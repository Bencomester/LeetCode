class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closest = nums[0] + nums[1] + nums[2];
        int len = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < len; i++) {
            int n = nums[i] * 3;
            if (n > target && abs(target - n) > abs(target - closest)) break;
            for (int j = i + 1; j < len; j++) {
                n = nums[i] + nums[j] * 2;
                if (n > target && abs(target - n) > abs(target - closest)) break;
                for (int k = j + 1; k < len; k++) {
                    n = nums[i] + nums[j] + nums[k];
                    if (n == target) return target;
                    if (abs(target - closest) > abs(target - n)) closest = n;
                    if (n > target) break;
                }
            }
        }
        return closest;
    }
};
