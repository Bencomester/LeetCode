class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int> stable;
        int len = height.size();
        for (int i = 1; i < len; i++) {
            if (height[i - 1] > threshold) stable.push_back(i);
        }
        return stable;
    }
};
