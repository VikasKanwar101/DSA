class Solution(object):
    def sortedSquares(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        a=[]
        b=[]
        c=[]
        for i in range(0,len(nums)):
            if(nums[i]>=0):
                a.append(nums[i])
            else:
                b.append(nums[i])
        for i in range(0,len(a)):
            a[i]=a[i]*a[i]
        for j in range(0,len(b)):
            b[j]=b[j]*b[j]
        b.reverse()
        i=0
        j=0
        if(len(a)==0):
            return b
        if(len(b)==0):
            return a
        while i<len(a) and j<len(b):
            if a[i]<b[j]:
                c.append(a[i])
                i+=1
            else:
                c.append(b[j])
                j+=1
        while i<len(a):
            c.append(a[i])
            i+=1
        while j<len(b):
            c.append(b[j])
            j+=1
        return c