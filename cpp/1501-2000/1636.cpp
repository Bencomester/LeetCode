class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> count(201, 0);
        for (int i : nums) count[i + 100]++;
        sort(nums.begin(), nums.end(), [&](int a, int b) {return count[a + 100] == count[b + 100] ? a > b : count[a + 100] < count[b + 100];});
        return nums;
    }
};
