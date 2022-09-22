class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {  // haan kyunki ek hi for loop hai to ho jaana chaiye -Divya Jain
        int m = queries.size();
        int n = nums.size();
        int evenSum = 0;
        for(int i=0; i<n; ++i)
            if(nums[i]%2 == 0)
                evenSum += nums[i];
        vector<int> ans(m);
        for(int i=0; i<m; ++i){
            int tempSum = nums[queries[i][1]];
            nums[queries[i][1]] += queries[i][0];
            if(tempSum%2 != 0 && nums[queries[i][1]]%2 == 0)
                evenSum += nums[queries[i][1]];
            else if(tempSum%2 == 0 && nums[queries[i][1]]%2 == 0)
                evenSum += queries[i][0];
            else if(tempSum%2 == 0 && nums[queries[i][1]]%2 != 0)
                evenSum -= tempSum;
            ans[i] = evenSum;
        }
        return ans;
    }
};