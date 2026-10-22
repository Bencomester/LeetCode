class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int len = nums.size();
        int cnt = 0;
        for (int i = 0; i < len - 1; i++) {
            for (int j = i + 1; j < len; j++) {
                if (i * j % k) continue;
                if (nums[i] == nums[j]) cnt++;
            }
        }
        return cnt;
    }
};
