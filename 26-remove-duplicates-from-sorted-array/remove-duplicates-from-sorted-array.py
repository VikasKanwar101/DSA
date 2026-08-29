class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        i=0
        j=1
        k=1
        while j<len(nums):
            if nums[j]==nums[j-1]:
                j+=1
            else:
                k+=1
                i+=1
                nums[i]=nums[j]
                j+=1
        return k