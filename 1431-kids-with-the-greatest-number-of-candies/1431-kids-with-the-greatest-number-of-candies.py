class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        ans = False 
        dd=[]
        for i in candies:
            if(extraCandies+i>=max(candies)):
                ans = True
                dd.append(ans)
            else:
                ans = False
                dd.append(ans)

        return dd            

        