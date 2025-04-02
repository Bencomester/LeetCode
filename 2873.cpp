class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long val = 0;
        int len = nums.size();
        for (int i = 0; i < len - 2; i++) {
            for (int j = i + 1; j < len - 1; j++) {
                int temp = nums[i] - nums[j];
                for (int k = j + 1; k < len; k++) {
                    val = max(val, (long long) temp * nums[k]);
                }
            }
        }
        return val;
    }
};
