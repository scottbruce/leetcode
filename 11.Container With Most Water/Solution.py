class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        left = 0
        right = len(height) - 1
        area = 0

        while(left < right):
            p = right - left
            q = min(height[right], height[left])
            area = max(area, p * q)  
            if(height[left] > height[right]):
                right = right -1
            else:
                left = left + 1       

        return area
