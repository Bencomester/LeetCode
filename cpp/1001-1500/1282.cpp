class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> groups(500);
        vector<vector<int>> result;
        int len = groupSizes.size();
        for (int i = 0; i < len; i++) {
            int num = groupSizes[i];
            groups[num - 1].push_back(i);
            if (groups[num - 1].size() == num) {
                result.push_back(groups[num - 1]);
                groups[num - 1] = {};
            }
        }
        return result;
    }
};
