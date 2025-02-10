// Solution.h
#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>  // For vector

class Solution {
public:
    // Function declaration
    int binary_search1(std::vector<int>& nums, int target);  // Binary search function
    int remove_element(std::vector<int>& nums, int value);// leetcode 27.
    int remove_element_double_pointers(std::vector<int>& nums, int value);// leetcode 27.
    int binary_review(std::vector<int>& nums, int target);//20250210 review pracice
    void test_binary_view();
    void test_shortest_subarray();
    int shortest_subarray(int s, std::vector<int> &nums); // rude
    int minSubArrayLen(int s, std::vector<int> &nums);
};

/// @brief 
struct remove_
{
    int removeElementReview(std::vector<int>& nums, int target);
    int removeElementReview2(std::vector<int> &nums, int val);
};

#endif  // SOLUTION_H
