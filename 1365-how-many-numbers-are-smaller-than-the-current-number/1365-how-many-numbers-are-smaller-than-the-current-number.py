class Solution(object):
    def smallerNumbersThanCurrent(self, nums):
        ans = []
        for i in nums:
            count =0
            for j in nums:
                if(i>j):
                    count=count+1 
            ans.append(count)
        
        return ans