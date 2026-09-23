class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        arr=list(set(nums))
        if(len(nums)>len(arr)):
            return True
        return False