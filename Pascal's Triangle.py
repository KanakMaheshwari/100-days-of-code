class Solution(object):
    def generate(self, numRows):
        pascal = []
        for i in range(1, numRows+1):
            if i == 1:
                pascal.append([1])
            elif i ==2:
                pascal.append([1,1])
            else:
                last = pascal[-1]
                new = [1]
                for j in range(len(last)-1):
                    new.append(last[j] + last[j+1])
                new.append(1)
                pascal.append(new)

        return pascal
