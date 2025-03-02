class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> result;
        int a = 0, b = 0;
        for (int i = 0; a < nums1.size() || b < nums2.size(); i++) {
            int sum = 0;
            while (a < nums1.size() && nums1[a][0] - 1 < i) a++;
            if (a < nums1.size() && nums1[a][0] - 1 == i) sum += nums1[a][1];
            while (b < nums2.size() && nums2[b][0] - 1 < i) b++;
            if (b < nums2.size() && nums2[b][0] - 1 == i) sum += nums2[b][1];
            if (sum != 0) result.push_back({i + 1, sum});
        }
        return result;
    }
};
