class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int smallest = abs(matrix[0][0]);
        long long sum = 0;
        int cnt = 0;
        for (const auto& v : matrix) {
            for (const int& i : v) {
                if (i < 0) cnt++;
                int a = abs(i);
                if (smallest > a) smallest = a;
                sum += a;
            }
        }

        return cnt % 2 ? sum - 2 * smallest : sum;
    }
};
