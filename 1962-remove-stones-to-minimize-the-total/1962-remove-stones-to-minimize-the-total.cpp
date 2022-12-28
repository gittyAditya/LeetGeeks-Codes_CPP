class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int n = piles.size();
        priority_queue<int> pq;
        for(auto i:piles)
            pq.push(i);
        while(k--){
            double p = pq.top();
            pq.pop();
            double q = ceil(p/2);
            pq.push(q);
        }
        int ans = 0;
        while(!pq.empty()){
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
};