class Solution:
    def minMergedInteger(self, nums: list[int]) -> int:
        min=10001002
        for i in range(0,len(nums)-1,2):
            s=str(nums[i])
            s+=str(nums[i+1])
            if int(s)<min:
                min=int(s)
        return min