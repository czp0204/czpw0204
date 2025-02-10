#include <iostream>
#include <vector>
#include "../include/Search.h"
#include "Search.h"

void Solution::test_binary_view() {
    Solution solution;
    
    // Test case 1: Target is in the middle
    std::vector<int> nums1 = {1, 2, 3, 4, 5};
    int target1 = 3;
    int result1 = solution.binary_review(nums1, target1);
    std::cout << "Test case 1 - Expected: 2, Got: " << result1 << std::endl;

    // Test case 2: Target is at the beginning
    std::vector<int> nums2 = {1, 2, 3, 4, 5};
    int target2 = 1;
    int result2 = solution.binary_review(nums2, target2);
    std::cout << "Test case 2 - Expected: 0, Got: " << result2 << std::endl;

    // Test case 3: Target is at the end
    std::vector<int> nums3 = {1, 2, 3, 4, 5};
    int target3 = 5;
    int result3 = solution.binary_review(nums3, target3);
    std::cout << "Test case 3 - Expected: 4, Got: " << result3 << std::endl;

    // Test case 4: Target is not in the list
    std::vector<int> nums4 = {1, 2, 3, 4, 5};
    int target4 = 6;
    int result4 = solution.binary_review(nums4, target4);
    std::cout << "Test case 4 - Expected: -1, Got: " << result4 << std::endl;

    // Test case 5: Empty list
    std::vector<int> nums5 = {};
    int target5 = 1;
    int result5 = solution.binary_review(nums5, target5);
    std::cout << "Test case 5 - Expected: -1, Got: " << result5 << std::endl;
}


void Solution::test_shortest_subarray() {
    Solution solution;

    // Test case 1: Subarray exists
    std::vector<int> nums1 = {2, 3, 1, 2, 4, 3};
    int s1 = 7;
    int result1 = solution.shortest_subarray(s1, nums1);
    std::cout << "Test case 1 - Expected: 2, Got: " << result1 << std::endl;

    // Test case 2: Subarray does not exist
    std::vector<int> nums2 = {1, 1, 1, 1, 1};
    int s2 = 11;
    int result2 = solution.shortest_subarray(s2, nums2);
    std::cout << "Test case 2 - Expected: 0, Got: " << result2 << std::endl;

    // Test case 3: Single element subarray
    std::vector<int> nums3 = {1, 2, 3, 4, 5};
    int s3 = 5;
    int result3 = solution.shortest_subarray(s3, nums3);
    std::cout << "Test case 3 - Expected: 1, Got: " << result3 << std::endl;

    // Test case 4: Entire array is the subarray
    std::vector<int> nums4 = {1, 2, 3, 4, 5};
    int s4 = 15;
    int result4 = solution.shortest_subarray(s4, nums4);
    std::cout << "Test case 4 - Expected: 5, Got: " << result4 << std::endl;

    // Test case 5: Empty array
    std::vector<int> nums5 = {};
    int s5 = 1;
    int result5 = solution.shortest_subarray(s5, nums5);
    std::cout << "Test case 5 - Expected: 0, Got: " << result5 << std::endl;
}
