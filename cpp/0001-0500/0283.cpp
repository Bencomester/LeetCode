class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNonZero = 0;
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] != 0) {
                lastNonZero = i;
                break;
            }
        }
        for (int i = lastNonZero; i >= 0; i--) {
            if (nums[i] == 0) {
                nums.erase(nums.begin() + i);
                nums.push_back(0);
            }
        }
    }
};
