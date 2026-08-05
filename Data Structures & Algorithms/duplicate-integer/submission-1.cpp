class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> m;
        for(auto a : nums){m[a]++;}
        for(auto x : m){
            if(x.second >= 2){return true;}
        }return false;
    }
};