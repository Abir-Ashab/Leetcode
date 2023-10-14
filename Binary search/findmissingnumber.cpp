#include <iostream>
#include <vector>

int findMissingNumber(std::vector<int>& nums) {
    int s = 0;
    int e = nums.size() - 1; 

    while(s <= e) {
        int mid = (e + s)/2;
        if(nums[mid] <= mid)
            s = mid+1;
        else
            e = mid - 1;
    }
    return s;
}

int main() {
    std::vector<int> nums = {0, 1, 2, 4, 5, 6};
    int missingNumber = findMissingNumber(nums);
    
    std::cout << "The missing number is: " << missingNumber << std::endl;
    
    return 0;
}
