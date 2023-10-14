def search(nums, target):
        k = 0
        for i in range(1, len(nums) - 1) :
                if(nums[i] < nums[i - 1]) :
                       k = i 
                       break 
        l = 0
        r = k - 1
        while  l <= r :
                mid = (int)(l + r)//2
                if(nums[mid] == target) :
                        return mid
                if(nums[mid] < target) :
                        l = mid + 1
                else :
                        r = mid - 1
        l2 = k
        r2 = len(nums) - 1
        while  l2 <= r2 :
                mid = (int)(l2 + r2)//2
                if(nums[mid] == target) :
                        return mid
                if(nums[mid] < target) :
                        l2 = mid + 1
                else :
                        r2 = mid - 1
        return -1


nums = [1]
target = 1
print(search(nums, target))


"""
class Solution(object):
    def search(self, nums, target):
        k = -1
        for i in range(1, len(nums)):
            if nums[i] < nums[i - 1]:
                k = i
                break

        l = 0
        r = k - 1
        while l <= r:
            mid = (l + r) // 2
            if nums[mid] == target:
                return mid
            if nums[mid] < target:
                l = mid + 1
            else:
                r = mid - 1

        l2 = k
        r2 = len(nums) - 1
        while l2 <= r2:
            mid = (l2 + r2) // 2
            if nums[mid] == target:
                return mid
            if nums[mid] < target:
                l2 = mid + 1
            else:
                r2 = mid - 1

        return -1

"""