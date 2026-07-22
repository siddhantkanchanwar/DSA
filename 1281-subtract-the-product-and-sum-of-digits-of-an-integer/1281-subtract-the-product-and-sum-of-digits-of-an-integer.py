class Solution(object):
    def subtractProductAndSum(self, n):
        pro=1
        s=0
        while(n>0):
            digit = n%10
            pro*=digit
            s+=digit
            n=n/10
        ans = pro-s
        return ans