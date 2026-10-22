class Solution {
public:
    int countDigits(int num) {
        vector<int> digits(10, 0);
        int n = num;
        while (n > 0) {
            digits[n % 10]++;
            n /= 10;
        }
        int count = 0;
        for (int i = 1; i < 10; i++) {
            if (num % i) continue;
            count += digits[i];
        }
        return count;
    }
};
