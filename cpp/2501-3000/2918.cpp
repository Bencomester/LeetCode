class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1 = 0, sum2 = 0;
        bool zero1 = false, zero2 = false;
        for (int i : nums1) {
            if (i == 0) {
                sum1++;
                zero1 = true;
            }
            else sum1 += i;
        }
        for (int i : nums2) {
            if (i == 0) {
                sum2++;
                zero2 = true;
            }
            else sum2 += i;
        }
        if (sum1 > sum2 && zero2) return sum1;
        if (sum2 > sum1 && zero1) return sum2;
        if (sum1 == sum2) return sum1;
        return -1;
    }
};
