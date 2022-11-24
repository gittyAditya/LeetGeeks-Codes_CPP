class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        unordered_set<string> st;
        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                string r = to_string(matrix[i][j])+ 'r'+ to_string(i);
                string c = to_string(matrix[i][j])+ 'c'+ to_string(j);
                if(st.find(r) != st.end() || st.find(c) != st.end())
                    return false;
                st.insert(r);
                st.insert(c);
            }
        }
        return true;
    }
};