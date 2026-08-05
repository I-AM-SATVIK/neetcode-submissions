class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        vector<pair<int, int>> a;
        for(auto &[x, y] : m){
            a.push_back({y, x});
        }
        sort(a.rbegin(), a.rend());
        vector<int> ans;
        for(int i=0; i<k; i++){
            ans.push_back(a[i].second);
        }
        return ans;
    }
};
