class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int len = nums.size();
        vector<int> result;
        for (int i = 0; i < len; i++) {
            if (index[i] >= result.size()) result.push_back(nums[i]);
            else result.insert(result.begin() + index[i], nums[i]);
        }
        return result;
    }
};
