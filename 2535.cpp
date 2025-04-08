class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        for (int i : nums) {
            sum += i;
            while (i > 0) {
                sum -= i % 10;
                i /= 10;
            }
        }
        return sum;
    }
};
