class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int left = 0;
        int right = 0;
        vector<int> result;
        for (int n : nums) right += n;
        for (int i = 0; i < nums.size(); i++) {
            right -= nums[i];
            result.push_back(abs(left - right));
            left += nums[i];
        }
        return result;
    }
};
