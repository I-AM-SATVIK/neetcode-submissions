class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i = 0; i<nums.size(); i++){
            for(int j = 0; j<nums.size(); j++){
                if(i!=j){
                    if(target == nums[i] + nums[j]){
                        if(i<j){
                            ans.push_back(i);
                            ans.push_back(j);
                            return ans;
                        }else{
                            ans.push_back(j);
                            ans.push_back(i);
                            return ans;
                        }
                    }
                }
            }
        }
        
    }
};
