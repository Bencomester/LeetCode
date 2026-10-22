class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int left = 0;
        int right = 0;
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());
        int n = sorted[0];
        int cnt = 1;
        int len = nums.size();
        for (int i = 1; i < len; i++) {
            if (sorted[i - 1] == sorted[i]) cnt++;
            else {
                if (right < cnt) {
                    right = cnt;
                    n = sorted[i - 1];
                }
                cnt = 1;
            }
        }
        if (right < cnt) {
            right = cnt;
            n = sorted[len - 1];
        }

        len--;
        for (int i = 0; i < len; i++) {
            if (nums[i] == n) {
                left++;
                right--;
            }
            if (i + 1 < 2 * left && len - i < 2 * right) return i;
        }
        return -1;
    }
};
