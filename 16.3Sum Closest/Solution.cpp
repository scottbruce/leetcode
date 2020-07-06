class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closet = nums[0] + nums[1] + nums[2];
        int diff = abs(closet - target);

        sort(nums.begin(), nums.end());

        for(int k = 0; k < nums.size() - 2; ++k){
            int left = k + 1;
            int right = nums.size() - 1;

            while(left < right){
                int sum = nums[k] + nums[left] + nums[right];
                int newdiff = abs(sum - target);

                if(newdiff < diff){
                    diff = newdiff;
                    closet = sum;
                }

                if(sum < target)
                    ++left;
                else
                    --right;
            }
        }
        return closet;
    }
};
