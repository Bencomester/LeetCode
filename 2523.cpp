class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> primes;
        for (int i = left; i <= right; i++) {
            if (prime(i)) primes.push_back(i);
        }
        if (primes.size() < 2) return {-1, -1};
        int l = left;
        int r = right;
        for (int i = 0; i < primes.size() - 1; i++) {
            if (primes[i + 1] - primes[i] < r - l) {
                r = primes[i + 1];
                l = primes[i];
            }
        }
        return {l, r};
    }

    bool prime(int n) {
        if (n < 2) return false;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
};
