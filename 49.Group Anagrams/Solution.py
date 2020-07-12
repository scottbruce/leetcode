class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        map_dict = {}
        res = []
        
        for i in strs:
            l = []
            tmp = list(i)
            tmp.sort()
            s = "".join(tmp)
            if map_dict.has_key(s):
                map_dict[s].append(i)
            else:
                l.append(i)
                map_dict[s] = l
        
        for value in map_dict.values():
            res.append(value)
        
        return res
