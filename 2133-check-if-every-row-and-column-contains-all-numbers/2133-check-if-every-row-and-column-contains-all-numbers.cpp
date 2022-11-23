class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0; i<n; ++i){
            unordered_set<int> st;
            for(int j=0; j<n; ++j){
                if(st.find(matrix[i][j]) != st.end())
                    return false;
                st.insert(matrix[i][j]);
            }
        }
        for(int i=0; i<n; ++i){
            unordered_set<int> st;
            for(int j=0; j<n; ++j){
                if(st.find(matrix[j][i]) != st.end())
                    return false;
                st.insert(matrix[j][i]);
            }
        }
        return true;
    }
};