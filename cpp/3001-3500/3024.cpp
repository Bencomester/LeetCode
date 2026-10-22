class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if (nums[0] + nums[1] <= nums[2]) return "none";
        short int eq = 0;
        if (nums[0] == nums[1]) eq++;
        if (nums[1] == nums[2]) eq++;
        if (eq == 0) return "scalene";
        else if (eq == 1) return "isosceles";
        else return "equilateral";
    }
};
