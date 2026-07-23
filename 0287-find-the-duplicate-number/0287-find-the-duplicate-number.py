class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        res=None
        d={}
        for i in range(len(nums)):
            if nums[i] in d:
                return nums[i]
            else:
                d[nums[i]]=1
        return res