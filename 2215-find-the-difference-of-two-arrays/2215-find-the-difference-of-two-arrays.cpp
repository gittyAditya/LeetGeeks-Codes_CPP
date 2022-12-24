class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> one;
        vector<int> two;
        unordered_set<int> st1;
        unordered_set<int> st2;
        for(auto i:nums1)
            st1.insert(i);
        for(auto i:nums2)
            st2.insert(i);
        for(auto i:st2)
            if(st1.find(i) == st1.end())
                two.push_back(i);
        for(auto i:st1)
            if(st2.find(i) == st2.end())
                one.push_back(i);
        return {one, two};
    }
};