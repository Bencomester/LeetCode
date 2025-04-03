class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int len = nums.size();

        vector<int> max1(len, 0);
        int pos = 0;
        for (int i = 0; i < len; i++) {
            if (nums[pos] <= nums[i]) pos = i;
            max1[i] = pos;
        }

        vector<int> max2(len, 0);
        pos = len - 1;
        for (int i = len - 1; i >= 0; i--) {
            if (nums[pos] <= nums[i]) pos = i;
            max2[i] = pos;
        }

        long long val = 0;
        for (int i = 1; i < len - 1; i++) {
                val = max(val, (long long) (nums[max1[i - 1]] - nums[i]) * nums[max2[i + 1]]);
        }
        return val;
    }
};
