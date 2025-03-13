class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int i : nums) {
            if (i < 10) continue;
            else if (i < 100) count++;
            else if (i < 1000) continue;
            else if (i < 10000) count++;
            else if (i < 100000) continue;
            else count++;
        }
        return count;
    }
};
