class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> result = {pref[0]};
        int n = 0;
        for (int i = 1; i < pref.size(); i++) {
            n ^= result[i - 1];
            result.push_back(pref[i] ^ n);
        }
        return result;
    }
};
