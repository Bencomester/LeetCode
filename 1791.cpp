class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<int> count(edges.size() + 1, 0);
        for (vector<int> i : edges) {
            for (int j : i) {
                count[j - 1]++;
            }
        }
        int max = 0;
        for (int i = 0; i < count.size(); i++) {
            if (count[max] < count[i]) max = i;
        }
        return max + 1;
    }
};
