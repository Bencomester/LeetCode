class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        if (nums[0] < k) return -1;
        int num = nums.back();
        int cnt = 0;
        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] == num) continue;
            num = nums[i];
            cnt++;
            if (nums[i] <= k) {
                num = k;
                break;
            }
        }
        return num == k ? cnt : cnt + 1;
    }
};
