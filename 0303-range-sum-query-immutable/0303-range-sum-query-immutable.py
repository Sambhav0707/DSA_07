class NumArray:

    def __init__(self, nums: List[int]):
        self.nums = nums
        self.prefix_sum = [0] * len(self.nums)
        self.prefix_sum[0] = self.nums[0]
        for i in range(1,len(self.nums)):
            self.prefix_sum[i] = self.prefix_sum[i-1] + self.nums[i]

        

    def sumRange(self, left: int, right: int) -> int:
        if left == 0:
            return self.prefix_sum[right]
        return self.prefix_sum[right] - self.prefix_sum[left - 1]
        


# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# param_1 = obj.sumRange(left,right)