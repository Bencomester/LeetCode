class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int remainder = grid[0][0] % x;
        vector<int> nums;
        for (vector<int> v : grid) for (int i : v) {
            if (i % x != remainder) return -1;
            nums.push_back(i);
        }
        sort(nums.begin(), nums.end());
        int n = nums[nums.size() / 2];
        int cnt = 0;
        for (int i : nums) cnt += abs(i - n) / x;
        return cnt;
    }
};
