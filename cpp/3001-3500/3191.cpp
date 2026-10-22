class Solution {
public:
    int minOperations(vector<int>& nums) {
        int len = nums.size();
        int count = 0;
        for (int i = 0; i < len - 2; i++) {
            if (nums[i] == 1) continue;
            for (int j = i; j <= i + 2; j++) nums[j] = nums[j] == 1 ? 0 : 1;
            count++;
        }
        return nums[len - 1] == 1 && nums[len - 2] == 1 ? count : -1;
    }
};
