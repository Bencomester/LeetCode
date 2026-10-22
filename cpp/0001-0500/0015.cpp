class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if (*min_element(nums.begin(), nums.end()) > 0 || *max_element(nums.begin(), nums.end()) < 0) return {};
        sort(nums.begin(), nums.end());
        reduce(nums);
        int pos = flip(nums);
        set<vector<int>> tri;
        int len = nums.size();
        for (int i = 0; i < len; i++) {
            if (nums[i] > 0) break;
            for (int j = i + 1; j < len - 1; j++) {
                if (nums[i] + nums[j] + nums.back() < 0) continue;
                if (nums[i] > -2 * nums[j]) break;
                for (int k = max(j + 1, pos); k < len; k++) {
                    int sum = nums[i] + nums[j] + nums[k];
                    if (sum > 0) break;
                    if (sum == 0) {
                        tri.insert({nums[i], nums[j], nums[k]});
                        break;
                    }
                }
            }
        }
        vector<vector<int>> v(tri.begin(), tri.end());
        return v;
    }

    void reduce(vector<int>& nums) {
        for (int i = 3; i < nums.size(); i++) if (nums[i - 3] == nums[i - 2] && nums[i - 2] == nums[i - 1] && nums[i - 1] == nums[i]) nums.erase(nums.begin() + i--);
    }

    int flip(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) if (nums[i] >= 0) return i;
        return -1;
    }
};
