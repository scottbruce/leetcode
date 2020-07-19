class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        res = []
        res = s.strip().split(' ')

        n = len(res)
        if res[n-1] != ' ':
            return len(res[n-1])
        else:
            return 0
