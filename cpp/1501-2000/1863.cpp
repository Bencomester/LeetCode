class Solution {
public:
    int subsetXORSum(vector<int>& nums, int index = 0, int temp = 0) {
        int sum = 0;
        for (int i = index; i < nums.size(); i++) {
            sum += temp ^ nums[i];
            sum += subsetXORSum(nums, i + 1, temp ^ nums[i]);
        }
        return sum;
    }


};
