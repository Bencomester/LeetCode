class Solution {
public:
    int countGoodNumbers(long long n) {
        long long cnt = powMod(20, n / 2);
        if (n % 2) cnt = cnt * 5 % 1000000007;
        return cnt;
    }

    long long powMod(long long a, long long n) {
        long long num = 1;
        while (n != 0) {
            if (n % 2) {
                num = num * a % 1000000007;
                n--;
            } else {
                a = a * a % 1000000007;
                n /= 2;
            }
            
        }
        return num;
    }
};
