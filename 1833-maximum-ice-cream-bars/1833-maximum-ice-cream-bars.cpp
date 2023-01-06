class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int
            n = costs.size(),
            ans=0,
            i=0;
        while(coins){
            if(i<n && costs[i] <= coins) {
                ans++;
                coins -= costs[i++];
            }
            else break;
        }
        return ans;
    }
};