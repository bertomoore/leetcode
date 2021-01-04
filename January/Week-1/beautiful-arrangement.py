"""
Suppose you have n integers from 1 to n. 
We define a beautiful arrangement as an array 
that is constructed by these n numbers successfully 
if one of the following is true 
for the ith position (1 <= i <= n) in this array:

- The number at the ith position is divisible by i. 
- i is divisible by the number at the ith position.

Given an integer n, 
return the number of the beautiful arrangements 
that you can construct.
"""

class Solution:

    def is_div(self, a, b):
        return a % b == 0 or b % a == 0

    def helper(self, nums):
        n = len(nums)

        if n == 1: return 1

        return sum(
            self.helper(nums[:i] + nums[i+1:])
            for i in range(n) if self.is_div(nums[i], n)
        )
    
    def countArrangement(self, n: int):
        return self.helper(list(range(1, n+1)))
