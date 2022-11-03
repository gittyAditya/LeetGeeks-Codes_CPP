class Solution {
public:
    int minAddToMakeValid(string s) {   // Divya kitni cool hai!!! (aww, unuhu, ahhahaha, hehey, arreeh, aanaanashdasdasodchuphoja, ahaha uuuuu, ahaanahannnaaa, unnnnnn, Adityaaaaaa, Aditya yaar unhunhunhun, ahaaahaha, ughhahusha, auuuuu, aaaaah, unhunhun, gaal dukh rhe hai chup hoja unnnnn, uhhahaha, hushsuhaananna, xxxxxx, Aditya unnnzuzuzuudududuuddu, Aditya chup heeeeehehehheheh, ah, submit kar de)
        int 
            ans = 0,
            count = 0,
            n = s.size();
        
        for(int i=0; i<n; ++i){
            if(count > 0 && s[i] == ')')
                --count;
            else if(count <= 0 && s[i] == ')')
                ++ans;
            else ++count;
        }
        return count+ans;
    }
};