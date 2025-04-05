class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> set;
        for (int i : nums) set.insert(i);
        int len = nums.size();
        vector<int> result;
        for (int i = 1; i <= len; i++) if (!set.contains(i)) result.push_back(i);
        return result;
    }
};
