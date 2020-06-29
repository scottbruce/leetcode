class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        dict = {}
        length = len(nums)
        #数组值做key，下标做value，建立map映射
        for i in range(0, length):
            dict[nums[i]] = i
        
        #查找target-nums[i]是否在dict中有key且排除相同的下标，如[3,3,6]
        for i in range(0, length):
            if dict.has_key(target - nums[i]) and i != dict[target - nums[i]]:
                return [i, dict[target - nums[i]]]
