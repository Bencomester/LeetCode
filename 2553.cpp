class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> result;
        for (int i = nums.size() - 1; i >= 0; i--) {
            while (nums[i] != 0) {
                result.push_back(nums[i] % 10);
                nums[i] /= 10;
            }
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
