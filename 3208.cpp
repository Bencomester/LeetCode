class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int count = 0;
        int len = colors.size();
        vector<int> nonAlt;
        for (int i = 0; i < k - 1; i++) {
            if (colors[i] == colors[i + 1]) nonAlt.push_back(i);
        }

        for (int i = 0; i < len; i++) {
            if (nonAlt.size() == 0) count++;
            else if (nonAlt[0] == i) nonAlt.erase(nonAlt.begin());
            if (colors[(i + k - 1) % len] == colors[(i + k) % len]) nonAlt.push_back(i + k - 1);
        }
        return count;
    }
};
