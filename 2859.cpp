class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        int len = nums.size();
        for (int i = 0; i < len; i++) if (check(i, k)) sum += nums[i];
        return sum;
    }

    bool check(int n, int k) {
        int count = 0;
        while (n != 0) {
            count += n % 2;
            n /= 2;
        }
        return count == k;
    }
};
