class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int m = queries.size();
        for(int i=0; i<n-1; ++i)
            nums[i+1] += nums[i];
        vector<int> ans(m);
        for(int i=0; i<m; ++i){
            int j=0;
            while(j<n && nums[j] <= queries[i])
                ++j;
            ans[i] = j;
        }
        return ans;
    }
};