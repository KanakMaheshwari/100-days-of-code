"""
Given an integer array nums, find the subarray with the largest sum, and return its sum

Input Format

First line of each test case or query contains an integer 'N' representing the size of the first array/list.
Second line contains 'N' single space separated integers representing the elements in the array/list.
Constraints

1 <= nums.length <= 10^5
-10^4 <= nums[i] <= 10^4
Output Format

Maximum subarray sum
"""
n=int(input())
inp=list(map(int,input().split()))
a=0
for i in range(n):
    for j in range(n):
        lst=[]
        lst+=inp[i:j+1] 
        a=max(a,sum(lst))
print(a)    
    
