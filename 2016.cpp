class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int l = nums.size();
        vector<int> m(l + 1, 0);
        for (int i = l; i >= 2; i--) m[i - 2] = max(m[i - 1], nums[i - 1]);
        int d = -1;
        for (int i = 0; i < l; i++) d = max(d, m[i] - nums[i]);
        return d ? d : -1;
    }
};
