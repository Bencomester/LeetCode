class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        int last = 0;
        int len = differences.size();
        int maxi = 0;
        int mini = 0;
        for (int i = 0; i < len; i++) {
            if (last > 0 && INT_MAX - last < differences[i]) return 0;
            else if (last < 0 && INT_MIN - last > differences[i]) return 0;
            int n = last + differences[i];
            last = n;
            maxi = max(n, maxi);
            mini = min(n, mini);
        }

        int dif1 = maxi - mini;
        int dif2 = upper - lower;
        int dif = dif2 - dif1 + 1;
        return dif > 0 ? dif : 0;
    }
};
