class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int start = 0, end = 0;
        int len = nums.size();
        int maximum = 1;
        while (end < len) {
            if (isNice(nums, start, end)) {
                maximum = max(end - start + 1, maximum);
                end++;
            }
            else start++;
        }
        return maximum;
    }

    bool isNice(vector<int>& nums, int start, int end) {
        for (int i = start; i < end; i++) {
            for (int j = i + 1; j <= end; j++) {
                if (nums[i] & nums[j]) return false;
            }
        }
        return true;
    }
};
