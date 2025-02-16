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
    int result1 = solution.minSubArrayLen(s1, nums1);
    std::cout << "Test case 1 - Expected: 2, Got: " << result1 << std::endl;

    // Test case 2: Subarray does not exist
    std::vector<int> nums2 = {1, 1, 1, 1, 1};
    int s2 = 11;
    int result2 = solution.minSubArrayLen(s2, nums2);
    std::cout << "Test case 2 - Expected: 0, Got: " << result2 << std::endl;

    // Test case 3: Single element subarray
    std::vector<int> nums3 = {1, 2, 3, 4, 5};
    int s3 = 5;
    int result3 = solution.minSubArrayLen(s3, nums3);
    std::cout << "Test case 3 - Expected: 1, Got: " << result3 << std::endl;

    // Test case 4: Entire array is the subarray
    std::vector<int> nums4 = {1, 2, 3, 4, 5};
    int s4 = 15;
    int result4 = solution.minSubArrayLen(s4, nums4);
    std::cout << "Test case 4 - Expected: 5, Got: " << result4 << std::endl;

    // Test case 5: Empty array
    std::vector<int> nums5 = {};
    int s5 = 1;
    int result5 = solution.minSubArrayLen(s5, nums5);
    std::cout << "Test case 5 - Expected: 0, Got: " << result5 << std::endl;
}


void Solution::test_generateMatrix() {
    Solution solution;

    // Test case 1: n = 1
    int n1 = 1;
    std::vector<std::vector<int>> result1 = solution.reviewSpiralmatrix(n1);
    std::cout << "Test case 1 - Expected: [[1]], Got: [[";
    for (const auto& row : result1) {
        for (const auto& elem : row) {
            std::cout << elem << " ";
        }
    }
    std::cout << "]]" << std::endl;

    // Test case 2: n = 2
    int n2 = 2;
    std::vector<std::vector<int>> result2 = solution.reviewSpiralmatrix(n2);
    std::cout << "Test case 2 - Expected: [[1, 2], [4, 3]], Got: [[";
    for (const auto& row : result2) {
        for (const auto& elem : row) {
            std::cout << elem << " ";
        }
    }
    std::cout << "]]" << std::endl;

    // Test case 3: n = 3
    int n3 = 3;
    std::vector<std::vector<int>> result3 = solution.reviewSpiralmatrix(n3);
    std::cout << "Test case 3 - Expected: [[1, 2, 3], [8, 9, 4], [7, 6, 5]], Got: [[";
    for (const auto& row : result3) {
        for (const auto& elem : row) {
            std::cout << elem << " ";
        }
    }
    std::cout << "]]" << std::endl;

    // Test case 4: n = 4
    int n4 = 4;
    std::vector<std::vector<int>> result4 = solution.reviewSpiralmatrix(n4);
    std::cout << "Test case 4 - Expected: [[1, 2, 3, 4], [12, 13, 14, 5], [11, 16, 15, 6], [10, 9, 8, 7]], Got: [[";
    for (const auto& row : result4) {
        for (const auto& elem : row) {
            std::cout << elem << " ";
        }
    }
    std::cout << "]]" << std::endl;

    // Test case 5: n = 5
    int n5 = 5;
    std::vector<std::vector<int>> result5 = solution.reviewSpiralmatrix(n5);
    std::cout << "Test case 5 - Expected: [[1, 2, 3, 4, 5], [16, 17, 18, 19, 6], [15, 24, 25, 20, 7], [14, 23, 22, 21, 8], [13, 12, 11, 10, 9]], Got: [[";
    for (const auto& row : result5) {
        for (const auto& elem : row) {
            std::cout << elem << " ";
        }
    }
    std::cout << "]]" << std::endl;
}

int LinkedList::get(int index)
{   if (index>(_size-1)||index<0)
    {
        return -1;
    }
    Listnode* cur = _dummyhead->next;
    while (index--)
    {
        cur = cur->next;// without a *
    }
    return cur->val;
    }

void LinkedList::addAthead(int val)
{
}

void LinkedList::addAttail(int val)
{
}

void LinkedList::addAtIndex(int index, int val)
{
}

void LinkedList::removeAtIndex(int index)
{
}

void LinkedList::printLinkedList(std::list<int> &refer)
{
    std::cout<< "LinkedList elements: ";
    for(int val : refer) {
        std:cout << val << " ";
    }
    std::cout << std::endl;

    refer.pop_back();
    refer.pop_front();

    std::cout<<"after pop";
    for(int val : refer){
        std::cout<<val<<" ";

    }
    std::cout << std::endl;

}



