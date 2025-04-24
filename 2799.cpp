class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int> set;
        for (const int& i : nums) set.insert(i);
        int dist = set.size();
        int l = 0, r = 0;
        int len = nums.size();
        int n = 1;
        unordered_map<int, int> map = {{nums[0], 1}};
        int cnt = 0;
        while (l < len) {
            if (n == dist) {
                cnt += len - r;
                if (map[nums[l]] == 1) n--;
                map[nums[l++]]--;
                if (len - l < dist) break;
            } else {
                if (r == len - 1) break;
                map[nums[++r]]++;
                if (map[nums[r]] == 1) n++;
            }
        }
        return cnt;
    }
};
