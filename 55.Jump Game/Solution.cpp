class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reach = 0;
        int n = nums.size();
        for(int i = 0; i < n; ++i){
            if(i > reach || reach >= n - 1)
                break;
            reach = max(i+nums[i], reach);
        }
        return reach >= n - 1;
    }
};
