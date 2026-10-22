class Solution {
public:
    bool isValid(string s) {
        stack<int> p;
        for (int i = 0; i < s.length(); i++) {
            switch(s[i]) {
                case '(':
                    p.push(1);
                    break;
                case '[':
                    p.push(2);
                    break;
                case '{':
                    p.push(3);
                    break;
                case ')':
                    if (p.size() == 0 || p.top() != 1) return false;
                    p.pop();
                    break;
                case ']':
                    if (p.size() == 0 || p.top() != 2) return false;
                    p.pop();
                    break;
                case '}':
                    if (p.size() == 0 || p.top() != 3) return false;
                    p.pop();
                    break;
            }
        }
        return p.size() == 0;
    }
};