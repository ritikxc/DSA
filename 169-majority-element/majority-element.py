class Solution(object):
    def majorityElement(self, nums):
        
        counts = {}
        size = len(nums) // 2

        for i in nums:
            if i in counts:
                counts[i] += 1
            else:
                counts[i] = 1
            if counts[i] > size:
                return i