class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int last = nums[0];
        int cnt = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (last == nums[i]) cnt++;
            else {
                last = nums[i];
                cnt = 1;
            }
            if (cnt == 3) {
                nums[i] = INT_MAX;
                cnt--;
            }
        }
        nums.erase(remove_if(nums.begin(), nums.end(), [&](const int& i) {return i == INT_MAX;}), nums.end());
        return nums.size();
    }
};
