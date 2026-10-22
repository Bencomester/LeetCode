class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for (int i = 0; i < k; i++) operation(nums, multiplier);
        return nums;
    }

    void operation(vector<int>& v, int mult) {
        int min = 0;
        for (int i = 1; i < v.size(); i++) if (v[i] < v[min]) min = i;
        v[min] *= mult;
    }
};
