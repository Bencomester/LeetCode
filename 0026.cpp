class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int last = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == last) nums.erase(nums.begin() + i--);
            else last = nums[i];
        }
        return nums.size();
    }
};