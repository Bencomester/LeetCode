class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int moves = 0;
        while (target != 1) {
            if (!maxDoubles) {
                moves += target - 1;
                break;
            }
            if (target % 2) {
                target--;
                moves++;
            } else {
                target /= 2;
                moves++;
                maxDoubles--;
            }
        }
        return moves;
    }
};
