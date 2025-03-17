class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        for (int i = 0; i < len; i += 2) {
            if (nums[i] != nums[i + 1]) return false;
        }
        return true;
    }
};
