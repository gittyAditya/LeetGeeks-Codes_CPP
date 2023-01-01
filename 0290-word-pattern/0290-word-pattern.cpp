class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream str(s);
        int count = 0;
        string w;
        while(str >> w)
            count++;
        cout << count << " " << pattern.size();
        if(count != pattern.size())
            return false;
        stringstream ptr(s);
        unordered_map<char, string> mp;
        unordered_set<string> st;
        string word;
        for(auto i:pattern){
            ptr >> word;
            if(mp.find(i) == mp.end() && st.find(word) == st.end()){
                mp[i] = word;
                st.insert(word);
            }
            else if(mp[i] != word)
                return false;
        }
        return true;
    }
};