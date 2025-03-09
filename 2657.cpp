class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> nums(n, 0);
        vector<int> result;
        for (int i = 0; i < n; i++) {
            nums[A[i] - 1]++;
            nums[B[i] - 1]++;
            result.push_back(count(nums));
        }
        return result;
    }

    int count(vector<int>& v) {
        int c = 0;
        for (int i : v) if (i == 2) c++;
        return c;
    }
};
