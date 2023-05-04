/*
Given an integer array nums of size n, return the minimum number of moves required to make all array elements equal.
In one move, you can increment or decrement an element of the array by 1.
Test cases are designed so that the answer will fit in a 32-bit integer.
Input Format

First line array size
Second line array elements
Constraints

n == nums.length
1 <= nums.length <= 10^5
-10^9 <= nums[i] <= 10^9
Output Format

Moves required to make array equal
Sample Input 0

3
1 2 3
Sample Output 0

2
Explanation 0

Explanation:
Only two moves are needed (remember each move increments or decrements one element):
[1,2,3] => [2,2,3] => [2,2,2]
Sample Input 1

4
1 10 2 9
Sample Output 1

16
*/
// C++ program to find minimum Increment or
// decrement to make array elements equal
#include <bits/stdc++.h>
using namespace std;


int minCost(int A[], int n) //[1,2,3,4], [4]
{
    
    int cost = 0;

    
    sort(A, A + n);

    
    int K = A[n / 2];   //k=A[2]

   
    for (int i = 0; i < n; ++i) 
        cost += abs(A[i] - K);   

   
    if (n % 2 == 0) {
        int tempCost = 0;

        K = A[(n / 2) - 1];  //k=1

     
        for (int i = 0; i < n; ++i)
            tempCost += abs(A[i] - K);
        
        cost = min(cost, tempCost); 
    }

    // Return total cost
    return cost;
}


int main()
{
    int n;
    cin>>n;
    int A[n] ;

    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    cout << minCost(A, n);

    return 0;
}
