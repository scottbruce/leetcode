class Solution(object):
    def intToRoman(self, num):
        """
        :type num: int
        :rtype: str
        """
        list_num = [1000,900,500,400,100,90,50,40,10,9,5,4,1]
        list_roman = ['M','CM','D','CD','C','XC','L','XL','X','IX','V','IV','I']
        res = ''

        for i in range(len(list_num)):
            while(num >= list_num[i]):
                res = res +  list_roman[i]
                num = num - list_num[i]
        
        return res
