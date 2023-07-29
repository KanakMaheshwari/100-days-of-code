class Solution(object):
    def singleNumber(self, nums):
        new=[]
        dup=[]
        for i in nums:
            if i not in new:
                new.append(i)
            else:
                dup.append(i)
        for i in dup:
            if i in new:
                new.remove(i)
        return new[0]                
