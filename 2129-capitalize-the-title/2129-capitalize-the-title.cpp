class Solution {        // In-place ^_^
public:
    string capitalizeTitle(string title) {      // Debugging op (finding overflow :)
        int n = title.size();
        for(int i=0; i<n; ++i){
            // cout << "this is i: " << i << endl;
            string res = "";
            while(i<n && title[i] != ' '){
                // cout << "the while i: " << i << endl;
                res += title[i++];
            }
            // cout << "after while i: " << i << endl;
            int m = res.size();
            // cout << "m is: " << m << endl;
            // cout << "and res is: " << res << endl;
            if(m < 3)
                for(int j = i-m; j<i; ++j){
                    title[j] = tolower(title[j]);
                    // cout << "this is j(smal): " << j << endl;
                }
            else {
                // cout << "we are in else" << endl;
                // cout << "i and m are: " << i << " " << m << endl;
                char c = toupper(title[i-m]);
                // cout << "c is: " << c << endl;
                title[i-m] = c;
                // cout << "the first letter is: " << title[i-m] << endl;
                for(int j = i-m+1; j<i; ++j){
                    title[j] = tolower(title[j]);
                    // cout << "later on: " << title[j] << endl;
                    // cout << "this is j(beeg): " << j << endl;
                }
            }
        }
        return title;
    }
};