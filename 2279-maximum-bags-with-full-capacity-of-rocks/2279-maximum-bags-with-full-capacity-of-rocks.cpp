class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = capacity.size();
        for(int i=0; i<n; ++i)
            capacity[i] -= rocks[i];
        sort(capacity.begin(), capacity.end());
        int i=0;
        for (i = 0; i < n && additionalRocks >= capacity[i]; ++i)
            additionalRocks -= capacity[i];
        return i;
    }
};