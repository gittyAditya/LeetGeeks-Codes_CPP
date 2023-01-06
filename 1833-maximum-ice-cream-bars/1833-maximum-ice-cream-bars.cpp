class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        priority_queue<int, vector<int>, greater<int>> pq;
        int ans = 0;
        for(auto i:costs)
            pq.push(i);
        while(coins){
            if(pq.top() <= coins && !pq.empty()){
                ans++;
                coins -= pq.top();
                pq.pop();
            }
            else break;
        }
        return ans;
    }
};