class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        int ronnin = 0;
        unordered_map<int, int> m;
        for(int i=0; i<n; ++i){
            ronnin += nums[i];
            if(ronnin == k)
                ans++;
            if(m.find(ronnin-k) != m.end())
                ans+=m[ronnin-k];
            m[ronnin]++;                // everytime we have to add to map
        }
        return ans;
    }
};
/* cool solution here
https://leetcode.com/problems/subarray-sum-equals-k/discuss/1532102/JAVA-oror-Picture-%2B-Detail-Explanation-oror-2-methods-oror-prefix-sum-%2B-HashMap-oror-Easy-Solution
https://leetcode.com/problems/subarray-sum-equals-k/discuss/1759909/C%2B%2Bor-Full-explained-every-step-w-Dry-run-or-O(n2)-greater-O(n)-or-Two-approaches
https://leetcode.com/problems/subarray-sum-equals-k/discuss/1760146/C%2B%2B-Easy-solution-prefix-sum-map-easy-understanding-hashmap

https://hellokoding.com/find-subarray-with-given-sum/

*/