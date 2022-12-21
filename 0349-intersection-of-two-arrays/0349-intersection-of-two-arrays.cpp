class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> hash(1001, 0);
        for(auto i:nums1)
            hash[i] = 1;
        vector<int> ans;
        for(auto i:nums2)
            if(hash[i] == 1){
                ans.push_back(i);
                hash[i] = 0;
            }
        return ans;
    }
};