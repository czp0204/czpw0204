// Solution.h
#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>  // For vector
#include <list>
#include <string>
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
    ListNode *next;// define a pointer point to this type of self-define datastructure
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

class LinkedList
{
    public:
        struct Listnode
        {
            int val;
            Listnode* next;
            Listnode(int x): val(x),next(nullptr) {};
        };
        LinkedList(){_size = 0; _dummyhead = new Listnode(0);}

        int get(int index);
        void addAthead(int val);
        void addAttail(int val);
        void addAtIndex(int index,int val);
        void removeAtIndex(int index);
        void printLinkedList(std::list<int>& refer);
        void printlinkedlist();
        void testLinkedList();
        ListNode* reverseList(ListNode* head);
        void testReverseList();
        ListNode* remove_nth_fromEnd(ListNode* head,int n);
        private:
        int _size;//the number of nodes
        Listnode* _dummyhead;
};

class HashtableSolution
{
private:
    /* data */
public:
    bool isAnagram(string s, string t);
    void test_isAnagram();//Compare 2 strings to find if they can be identical through 
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2);
    void test_intersection();
    vector<int> twoSum(vector<int> nums, int target);
    vector<int> forsum(vector<int>&A,vector<int>&B,vector<int>&C,vector<int>&D);
};



#endif  // SOLUTION_H
