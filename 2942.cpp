class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> v;
        for (int i = 0; i < words.size(); i++) {
            if (find(words[i].begin(), words[i].end(), x) != words[i].end()) v.push_back(i);
        }
        return v;
    }
};
