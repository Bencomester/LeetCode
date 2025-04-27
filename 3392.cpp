class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int cnt = 0;
        for (int i = nums.size() - 2; i > 0; i--) if ((nums[i - 1] + nums[i + 1]) * 2 == nums[i]) cnt++;
        return cnt;
    }
};
