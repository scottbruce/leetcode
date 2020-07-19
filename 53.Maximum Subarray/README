class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curSum = 0, res = INT_MIN;
        for(int num:nums){
            curSum = max(curSum + num, num);
            res = max(curSum, res);
        }
        return res;
    }
};
