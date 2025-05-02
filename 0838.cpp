class Solution {
public:
    string pushDominoes(string dominoes) {
        string last = "";
        int len = dominoes.length();
        while (last != dominoes) {
            last = dominoes;
            dominoes = "";
            dominoes += len > 1 && last[0] == '.' && last[1] == 'L' ? 'L' : last[0];
            for (int i = 1; i < len - 1; i++) {
                if (last[i] != '.') {
                    dominoes += last[i];
                    continue;
                }
                short int s = (last[i - 1] == 'R') - (last[i + 1] == 'L');
                dominoes += s == -1 ? 'L' : (s == 1 ? 'R' : '.');
            }
            if (len > 1) dominoes += last[len - 1] == '.' && last[len - 2] == 'R' ? 'R' : last[len - 1];
            cout << dominoes << endl;
        }
        return dominoes;
    }
};
