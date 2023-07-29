class Solution(object):
    def singleNumber(self, nums):
        new=[]
        dup=[]
        for i in nums:
            if i not in new:
                new.append(i)
            else:
                dup.append(i)
        for i in new:
            if i not in dup:
                a=i 
        return a                   
