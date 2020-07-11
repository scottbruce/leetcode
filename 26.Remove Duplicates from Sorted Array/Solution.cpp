class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;

        int i = 0;
        int j = 0;
        int n = nums.size();

        while(j != n){
            if(nums[i] == nums[j])
                ++j;
            else{
                nums[++i] = nums[j++];
            }
        }
        return i+1;
    }
};
