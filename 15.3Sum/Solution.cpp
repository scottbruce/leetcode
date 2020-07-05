class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        if(nums.empty() || nums[0] > 0 || nums[nums.size() - 1] < 0)
            return {};
        
        for(int k = 0; k < (int)nums.size() -2; ++k){
            if (nums[k] > 0) break;
            if (k > 0 && nums[k] == nums[k - 1])continue;
          
            int i = k+1 , j = nums.size() - 1;
            int target = 0 - nums[k];
            while(i < j){
                if(target == nums[i] + nums[j]){
                    res.push_back({nums[i], nums[j], nums[k]});
                    while(i < j && nums[i] == nums[i + 1]) ++i;
                    while(i < j && nums[j] == nums[j - 1]) --j;
                    ++i, --j;
                }else if(nums[i] + nums[j] < target){
                    ++i;
                }else{
                    --j;
                }
            }
        }
        return res;
    }
};
