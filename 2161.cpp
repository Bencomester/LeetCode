class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> smaller;
        vector<int> bigger;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < pivot) {
                smaller.push_back(nums[i]);
                nums.erase(nums.begin() + i);
                i--;
            } else if (nums[i] > pivot) {
                bigger.push_back(nums[i]);
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        nums.insert(nums.begin(), smaller.begin(), smaller.end());
        nums.insert(nums.end(), bigger.begin(), bigger.end());
        return nums;
    }
};
