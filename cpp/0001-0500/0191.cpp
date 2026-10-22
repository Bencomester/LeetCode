class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while (n / 2 > 0 || n % 2 == 1) {
            if (n % 2 == 1) count++;
            n /= 2;
        }
        return count;
    }
};