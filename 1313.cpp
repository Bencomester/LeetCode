class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> result;
        int len = nums.size();
        for (int i = 0; i < len; i += 2) {
            for (int j = 0; j < nums[i]; j++) result.push_back(nums[i + 1]);
        }
        return result;
    }
};
