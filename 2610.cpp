class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int len = nums.size();
        vector<int> count(len + 1, 0);
        for (int i : nums) count[i]++;
        vector<vector<int>> result;
        while (true) {
            bool end = true;
            vector<int> row;
            for (int i = 0; i <= len; i++) {
                if (count[i] > 0) {
                    end = false;
                    count[i]--;
                    row.push_back(i);
                }
            }
            if (end) break;
            result.push_back(row);
        }
        return result;
    }
};
