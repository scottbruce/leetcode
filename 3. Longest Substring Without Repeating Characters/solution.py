class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        dict = {}
        left = -1  #滑动窗口左值
        res = 0

        for i in range(0, len(s)):
            if dict.has_key(s[i]) and dict[s[i]] > left :  #如果字符曾经出现过且在窗口左边的右侧，则更新左边窗口
                left = dict[s[i]]

            dict[s[i]] = i
            res = max(res, i - left)

        return res 
                


