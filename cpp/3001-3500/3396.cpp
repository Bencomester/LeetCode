class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int> set;
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (set.contains(nums[i])) return i / 3 + 1;
            set.insert(nums[i]);
        }
        return 0;
    }
};
