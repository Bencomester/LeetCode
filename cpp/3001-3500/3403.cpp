class Solution {
public:
    string answerString(string word, int numFriends) {
        if (numFriends == 1) return word;
        int l = word.length();
        int len = l - numFriends + 1;

        string str = word.substr(0, len);
        for (int i = 1; i < l; i++) {
            string s;
            if (i < numFriends) s = word.substr(i, len);
            else s = word.substr(i, l - i);
            if (s > str) str = s;
        }

        return str;
    }
};
