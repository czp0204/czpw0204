// Solution.h
#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>  // For vector
#include <list>
using namespace std;
class Solution {
public:
    // Function declaration
    int binary_search1(std::vector<int>& nums, int target);  // Binary search function
    int remove_element(std::vector<int>& nums, int value);// leetcode 27.
    int remove_element_double_pointers(std::vector<int>& nums, int value);// leetcode 27.
    int binary_review(std::vector<int>& nums, int target);//20250210 review pracice
    void test_binary_view();
    void test_shortest_subarray();
    void test_generateMatrix();
    int shortest_subarray(int s, std::vector<int> &nums); // rude
    int minSubArrayLen(int s, std::vector<int> &nums);
    vector<vector<int>> generateMatrix(int n);
    vector<vector<int>> reviewSpiralmatrix(int n );//20250214
};

/// @brief 
struct remove_
{
    int removeElementReview(std::vector<int>& nums, int target);
    int removeElementReview2(std::vector<int> &nums, int val);
};

struct ListNode 
{
    int val;// element stored in node
    ListNode *next;
    ListNode(int x): val(x),next(nullptr) {};// constructor
};

class solution2
{
private:
    /* data */
public:
//core role is deleting the node that value = val
    ListNode* removeElements(ListNode* head,int val);//without dummy sentinel
    ListNode* removeElementsWithSentinel(ListNode* head,int val);
    
};

class LinkedList{
    public:
        void printLinkedList(std::list<int>& refer);
};

#endif  // SOLUTION_H
