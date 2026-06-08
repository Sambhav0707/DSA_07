class Solution:
    def pivotArray(self, nums: List[int], pivot: int) -> List[int]:
        lessThan = []
        greaterThan = []
        equalToPivot = []

        for num in nums:
            if num < pivot:
                lessThan.append(num)
            elif num > pivot:
                greaterThan.append(num)
            else:
                equalToPivot.append(num)
        
        return lessThan + equalToPivot +  greaterThan

        