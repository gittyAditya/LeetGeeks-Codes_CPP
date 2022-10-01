class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> minHeap(nums.begin(), nums.begin()+k);
        make_heap(minHeap.begin(), minHeap.end(), greater<int>());
        
        for(int i=k; i<n; ++i){
            if(nums[i] > minHeap.front()){
                pop_heap(minHeap.begin(), minHeap.end(), greater<int>());
                minHeap.pop_back();
                minHeap.push_back(nums[i]);
                push_heap(minHeap.begin(), minHeap.end(), greater<int>());
            }
        }
        return minHeap[0];
    }
};