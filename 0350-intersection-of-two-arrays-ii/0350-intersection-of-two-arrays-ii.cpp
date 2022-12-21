class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> hash(1001, 0);
        for(auto i:nums1)
            hash[i]++;     
        vector<int> ans;
        for(auto i:nums2)
            if(hash[i] > 0){
                ans.push_back(i);
                hash[i]--;
            }
        return ans;
    }
};