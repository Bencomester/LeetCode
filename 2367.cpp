class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int len = nums.size();
        map<int, vector<int>> map;
        for (int i = 0; i < len - 1; i++) {
            for (int j = i + 1; j < len; j++) {
                if (nums[j] - nums[i] == diff) map[nums[i]].push_back(nums[j]);
            }
        }
        
        int cnt = 0;
        for (int i : nums) for (int j : map[i]) cnt += map[j].size();
        return cnt;
    }
};
