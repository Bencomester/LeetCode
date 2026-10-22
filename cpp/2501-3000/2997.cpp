class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        for (int i : nums) k ^= i;
        int n = 0;
        while (k > 0) {
            if (k % 2) n++;
            k /= 2;
        }
        return n;
    }
};
