class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> v = nums;
        sort(v.begin(), v.end());
        multiset<int> m(v.end() - k, v.end());
        v.clear();
        for (int i : nums) {
            auto it = m.find(i);
            if (it != m.end()) {
                v.push_back(*it);
                m.erase(it);
            }
        }
        return v;
    }
};
