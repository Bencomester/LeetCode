class Solution {
public:
    int climbStairs(int n) {
        int two = n / 2;
        long long sum = 0;
        for (int i = 0; i <= two; i++) {
            int j = n - 2 * i;
            sum += multiplyFromTo(i + j, max(i, j) + 1, min(i, j));
        }
        return sum;
    }

    long long multiplyFromTo(int to, int from, int divTo) {
        long long product = 1;
        long long div = 2;
        for (int i = from; i <= to; i++) {
            product *= (long long) i;
            if (div <= divTo && product % div == 0) product /= div++;
        }
        return product;
    }
};