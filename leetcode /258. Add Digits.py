class Solution(object):
    def addDigits(self, num):
        if num==0:
            return 0
        ans = 9 if num%9==0 else (num%9)
        return ans