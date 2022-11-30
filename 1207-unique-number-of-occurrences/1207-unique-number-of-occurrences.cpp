class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> freq(2001);     // values in range => counting sort 0_o
        for(auto i:arr)
            freq[i+1000]++;
        sort(freq.begin(), freq.end());
        for(int i=0; i<2000; ++i)
            if(freq[i] && freq[i] == freq[i+1])
                return false;
        return true;
    }
};