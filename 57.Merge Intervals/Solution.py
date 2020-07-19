class Solution(object):
    def merge(self, intervals):
        """
        :type intervals: List[List[int]]
        :rtype: List[List[int]]
        """
        if len(intervals) == 0:
            return []
        
        res = []
        intervals.sort();
        res.append(intervals[0])
        for i in range(1, len(intervals)):
            n = len(res) - 1
            if res[n][1] < intervals[i][0]:
                res.append(intervals[i])
            else:
                res[n][1] = max(res[n][1], intervals[i][1])
        
        return res
        
            
