class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = capacity.size();
        for(int i=0; i<n; ++i){
            capacity[i] -= rocks[i];
        }
        sort(capacity.begin(), capacity.end());
        int ans = 0;
        int i=0;
        while(additionalRocks && i<n){
            if(capacity[i] == 0)
                ans++;
            else if(capacity[i] <= additionalRocks){
                additionalRocks -= capacity[i];
                capacity[i] = 0;
                ans++;
            }
            ++i;
        }
        return ans;
    }
};