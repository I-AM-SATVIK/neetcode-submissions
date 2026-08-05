class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        map<char, int> smap, tmap;
        for(auto x : s){smap[x]++;}
        for(auto x : t){tmap[x]++;}
        for(auto [f, s] : smap){
            if(smap[f]!=tmap[f]) return false;
        }
        return true;
    }
};
