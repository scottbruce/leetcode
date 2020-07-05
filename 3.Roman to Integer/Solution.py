class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        dict = {'M':1000,'D':500,'C':100,'L':50,'X':10,'V':5,'I':1}
        res = 0

        for i in range(len(s)):
            val = dict[s[i]]
            if i == len(s) - 1 or dict[s[i+1]] <= dict[s[i]]:
                res = res + dict[s[i]]
            else:
                res = res - val
        return res
