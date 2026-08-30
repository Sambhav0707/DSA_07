class Solution:
    def minimumDeletions(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return 1
        min_index = 0
        max_index = 0
        min_element = nums[0]
        max_element = nums[0]

        for i in range(1 , len(nums)):
            if nums[i] > max_element:
                max_element = nums[i]
                max_index = i
            
            if nums[i] < min_element:
                min_element = nums[i]
                min_index = i
        

        if max_index > min_index:
            # front
            front_deletion_min = min_index + 1
            front_deletion_max = (max_index + 1) - front_deletion_min
            total_front = front_deletion_min + front_deletion_max

            # back
            back_deletion_max = len(nums)-max_index
            back_deletion_min = (len(nums)-min_index) - back_deletion_max
            total_back = back_deletion_min + back_deletion_max

            # both ways 
            delete1 = len(nums)-max_index
            delete2 = min_index + 1
            both = delete1 + delete2

            return min(total_front , total_back , both)
        
        else:
            # front
            front_deletion_max = max_index + 1
            front_deletion_min = (min_index + 1) - front_deletion_max
            total_front = front_deletion_min + front_deletion_max

            # back
            back_deletion_min = len(nums)-min_index
            back_deletion_max = (len(nums)-max_index) - back_deletion_min 
            total_back = back_deletion_min + back_deletion_max

            # both ways 
            delete1 = len(nums)-min_index
            delete2 = max_index + 1
            both = delete1 + delete2

            return min(total_front , total_back , both)


        return -1
        