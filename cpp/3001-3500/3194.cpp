class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums.size() - 1;
        double avg = (double) (nums[left] + nums[right]) / 2;
        while (++left < --right) {
            if (nums[left] > avg) break;
            avg = min(avg, (double) (nums[left] + nums[right]) / 2);
        }
        return avg;
    }
};
