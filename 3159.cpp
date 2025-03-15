class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> indexes;
        int len = nums.size();
        for (int i = 0; i < len; i++) if (nums[i] == x) indexes.push_back(i);
        vector<int> result;
        int leni = indexes.size();
        for (int i : queries) {
            if (i > leni) result.push_back(-1);
            else result.push_back(indexes[i - 1]);
        }
        return result;
    }
};
