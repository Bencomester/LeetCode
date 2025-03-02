class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int m = getMax(candies);
        vector<bool> v;
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= m) v.push_back(true);
            else v.push_back(false);
        }
        return v;
    }

    int getMax(vector<int> v) {
        int m = 0;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] > m) m = v[i];
        }
        return m;
    }
};
