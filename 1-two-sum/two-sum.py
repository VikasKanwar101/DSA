class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        hash={}
        for i in range(0,len(nums)):
            remaining=target-nums[i]
            if(remaining in hash):
                return [hash[remaining],i]
            hash[nums[i]]=i