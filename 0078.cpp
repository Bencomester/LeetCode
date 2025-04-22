class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums, int i = 0, vector<int> current = {}) {
        int len = nums.size();
        int sets = 1 << len;
        vector<vector<int>> result;
        for (int i = 0; i < sets; i++) {
            vector<int> v;
            int n = i;
            for (int j = 0; j < len; j++) {
                if (n % 2) v.push_back(nums[j]);
                n /= 2;
            }
            result.push_back(v);
        }
        return result;
    }
};
