class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        for (int i : nums) result.push_back(smaller(nums, i));
        return result;
    }

    int smaller(vector<int>& nums, int n) {
        int count = 0;
        for (int i : nums) if (i < n) count++;
        return count;
    }
};
