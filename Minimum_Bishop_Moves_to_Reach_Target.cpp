class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        if(abs(source[0] - target[0]) == abs(source[1] - target[1])) return 1;
        else if((source[0] + source[1])%2 == 0 && \
                (target[0] + target[1])%2 == 0) return 2;
        else if((source[0] + source[1])%2 == 1 && \
                (target[0] + target[1])%2 == 1) return 2;
        return -1;
    }
};