class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> set;
        for (int i : nums) set.insert(i);
        for (int i = 1; true; i++) if (!set.contains(i)) return i;
        return 0;
    }
};
