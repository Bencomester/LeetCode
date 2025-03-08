class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int sum = 0;
        for (int i = 0; i < s.length(); i++) sum += abs(i - distance(t.begin(), find(t.begin(), t.end(), s[i])));
        return sum;
    }
};
