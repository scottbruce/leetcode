class Solution(object):
    def letterCombinations(self, digits):
        """
        :type digits: str
        :rtype: List[str]
        """
        if not digits : 
            return []
        
        res = ['']
        dict = {'1':'', '2':'abc','3':'def','4':'ghi','5':'jkl','6':'mno','7':'pqrs','8':'tuv','9':'wxyz'}
        for i in range(0, len(digits)):
            tmp = []
            tmpstr = dict[digits[i]]
            for j in range(0, len(tmpstr)):
                for s in res:
                    tmp.append(s + tmpstr[j])
            res = tmp
        
        return res

