class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<int>> char_place;
        for(int i=0; i<strs.size(); i++){
            string k = strs[i];
            sort(k.begin(), k.end());
            char_place[k].push_back(i);
        }
        vector<vector<string>> ans;
        for( auto &[x, y] : char_place){
            int l = y.size();
            vector<string> sub_ans;
            for(int j=0; j<l; j++){
                sub_ans.push_back(strs[y[j]]);
            }
            ans.push_back(sub_ans);
        }
        return ans;
    }
};