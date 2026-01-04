class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;
        for (const int& n : nums) {
            int cnt = 0;
            int subsum = 0;
            for (int i = 1; i <= sqrt(n); i++) {
                if (n % i) continue;
                if (n / i == i) {
                    subsum += i;
                    cnt++;
                } else {
                    subsum += n / i + i;
                    cnt += 2;
                }
                if (cnt > 4) break;
            }
            if (cnt == 4) sum += subsum;
        }
        return sum;
    }
};
