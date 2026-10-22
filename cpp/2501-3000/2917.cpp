class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int result = 0;
        int two = 1;
        int len = nums.size();
        while (*max_element(nums.begin(), nums.end()) > 0) {
            int count = 0;
            for (int i = 0; i < len; i++) {
                if (nums[i] % 2) count++;
                nums[i] /= 2;
            }
            if (count >= k) result += two;
            if (two != 1073741824) two *= 2;
        }
        return result;
    }
};
