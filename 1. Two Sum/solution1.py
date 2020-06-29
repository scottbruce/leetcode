class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        temp = nums[:]  #复制数组
        temp.sort()     #按照升序排序

        i = 0
        j = len(nums)-1  #双指针夹逼target
        while i < j:
            if (temp[i] + temp[j]) < target:
                i = i + 1
            elif (temp[i] + temp[j]) > target:
                j = j - 1
            else:
                break
        
        #排序后的数组下标已乱，需要找到原始数组的下标
        p = nums.index(temp[i])
        nums[p] = nums[p] - 1   #避免找到同1个值，改变nums[p]的值
        q = nums.index(temp[j])
 
        return [p,q]
