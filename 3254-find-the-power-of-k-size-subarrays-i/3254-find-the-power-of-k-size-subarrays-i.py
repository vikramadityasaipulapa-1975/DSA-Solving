class Solution:
    def resultsArray(self, nums: List[int], k: int) -> List[int]:
        l=[]
        for i in range(len(nums)-k+1):
            f=0
            for j in range(i,i-1+k):
                if(nums[j]+1!=nums[j+1]):
                    f=1
            if f==0:
                l.append(nums[i+k-1])
            else:
                l.append(-1)
        return l