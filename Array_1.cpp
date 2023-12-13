#include <iostream>
#include <vector>

int maxOnesCount(const std::vector<int>& nums) {
    int maxCount = 0;
    int currentCount = 0;

    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == 1) {
            currentCount++;
            maxCount = std::max(maxCount, currentCount);
        }
        else {
            currentCount = 0;
        }
    }

    return maxCount;
}

int main() {
    // Приклад 1
    std::vector<int> nums1 = { 1, 1, 0, 1, 1, 1 };
    std::cout << "Example 1 Output: " << maxOnesCount(nums1) << std::endl;

    // Приклад 2
    std::vector<int> nums2 = { 1, 0, 1, 1, 0, 1 };
    std::cout << "Example 2 Output: " << maxOnesCount(nums2) << std::endl;

    return 0;
}
