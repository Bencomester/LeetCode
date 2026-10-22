class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums, int index = 0, int target = 0, int a = 0) {
        if (index == nums.size()) return target == a ? 1 : 0;
        if (!target) for (int i : nums) target |= i;
        return countMaxOrSubsets(nums, index + 1, target, a) + countMaxOrSubsets(nums, index + 1, target, (a | nums[index]));
    }
};
