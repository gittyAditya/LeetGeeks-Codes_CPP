class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> st;
        for(int i=0; i<9; ++i){
            for(int j=0; j<9; ++j){
                if(board[i][j] == '.')
                    continue;
                string r = to_string(i) + 'r' + board[i][j];
                string c = to_string(j) + 'c' + board[i][j];
                string b = to_string(i/3) + to_string(j/3) + 'b' + board[i][j];
                if(st.find(r) != st.end() || st.find(c) != st.end() || st.find(b) != st.end())
                    return false;
                st.insert(r);
                st.insert(c);
                st.insert(b);
            }
        }
        return true;
    }
};