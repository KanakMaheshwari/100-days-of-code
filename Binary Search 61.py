"""
You have been given a sorted(in ascending order) integer array/list(ARR) of size N and an element X. Write a function to search this element in the given input array/list using 'Binary Search'. Return the index of the element in the input array/list. If the element is not present in the array/list, then return -1.

Input Format

Value representing size of the array
Line consists of 'n' space seperated integers representing the values present in the Array
Target Element which we needs to find
Constraints

No

Output Format

Index of that target element

Sample Input 0

3
1 2 3
0
Sample Output 0

-1
Explanation 0

0 is not present in the array, so give -1 as answer
"""
def bs(lst,start,end,a):
    while start<=end:
        mid=(start+end)//2
        if a==lst[mid]:
            return mid    
        elif a<lst[mid]:
            end=mid-1
        elif a>lst[mid]:
            start=mid+1
    return -1
n=int(input())
lst=list(map(int,input().split()))
a=int(input())
start=0
end=n-1
print(bs(lst,start,end,a))
