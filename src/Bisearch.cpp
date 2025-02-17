 // Solution.cpp
#include "../include/Search.h"  // Include the header file to match the interface
#include <vector>  // Include the vector header
#include <stdlib.h>
#include "Search.h"
#include <iostream>

int Solution::binary_search1(std::vector<int>& nums, int target) {
    size_t left = 0;
    size_t right = nums.size() - 1;  // Use size_t for size
    while (left <= right) {
        size_t middle = left + (right - left) / 2;  // Calculate the middle index
        if (target == nums[middle]) 
            return middle;  // Return index if target is found
        if (target < nums[middle])
            right = middle - 1;  // Target is in the left half
        else
            left = middle + 1;   // Target is in the right half
    }
    return -1;  // Return -1 if target is not found

}
//Brute force method time:n^2 space:1
int Solution::remove_element(std::vector<int>& nums, int value) {
    size_t size = nums.size();
    for(size_t i = 0; i < nums.size(); i++) {
        
        if(nums[i] == value) {
            for(size_t j = i + 1; j < size; j++) {
                nums[j-1] = nums[j];    
            }
            size --;
            i--;
        }
    }
    return size;
}
//double pointer solution, fast and slow pointer method
//According to Fastindex, update the value where slowindex points to
int Solution::remove_element_double_pointers(std::vector<int>& nums, int value) {
    int slowIndex = 0;
    for (int fastIndex = 0;fastIndex < nums.size();fastIndex++) {
        if(nums[fastIndex]!= value ) {
            nums[slowIndex++] = nums[fastIndex];
        }
    }
    return slowIndex;
}  
int Solution::binary_review(std::vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size();
    while (left < right)
    {
        int middle = left + (right - left)/2;
        if (nums[middle] == target)
        {
           return middle; 
        }
        else if (nums[middle] < target)
        {
            left = middle+1;
        }
        else
        {
            right = middle;
        }
        
    }
    return -1;
    
}
//review at 20250210 15:47
int remove_::removeElementReview(std::vector<int> &nums, int target)
{
    int size = nums.size();
    for(int i = 0; i < nums.size(); i++){
        if (nums[i]==target)
        {
            for(int j = i+1; j<nums.size();j++){
                nums[j-1] = nums[j];
            }
            i--;//The all values have shifted one positon ahead. Recount.
            size--;//Apperently minus 1
        }
    }
    return size ;
}
// reviewed at 20250210 16:34 fast-index
int remove_::removeElementReview2(std::vector<int>& nums, int val){
   int slowindex = 0;
   for(int fastindex = 0;fastindex < nums.size();fastindex++){
    if(val!=nums[fastindex]){
        nums[slowindex++]=nums[fastindex];
    }
   }
   return slowindex;
}
//return shortest subarray whose sum is larger than the given number
int Solution::shortest_subarray(int s, std::vector<int>& nums)
{
    int sum = 0;
    int result = __INT32_MAX__;
    int sublength = 0;
    for(int i = 0;i<nums.size();i++)
    {   sum = 0;
        for(int j = i ;j<nums.size();j++)
        {
        sum = sum +nums[j];
            if(sum>=s)
            {
                sublength = j-i+1;
                result = result < sublength?result:sublength;
                break;
            } 
        }
    }
    return result == __INT32_MAX__?0:result;
}
//sliding window
int Solution::minSubArrayLen(int s,std::vector<int>& nums)
{
    int i =0; //start point index
    int sum = 0;//to compare with given s 
    int sublength = 0;//every length with respect to the start index
    int result = __INT32_MAX__;//to store possible result
    for(int j = 0;j<nums.size();j++)
    {
        sum+=nums[j];//cumulate the sum of array
        while(sum>=s)
        {
            sublength=j-i+1;
            result = result> sublength?sublength:result;
            sum-=nums[i++];

        }
    }
    return result == __INT32_MAX__?0:result;    
}
// leetcode 59. spiral matrix,Prncinple :left inclusive,right exclusive
std::vector<std::vector<int>> Solution::generateMatrix(int n)
{
    std::vector<std::vector<int>> result(n, std::vector<int>(n, 0));
    
    int startx = 0;
    int starty = 0;
    int looptime = n / 2; // circle time
    int mid = n / 2;//set middle coordinate if n is a odd number
    int offset = 1; // control the length of each for loop
    int count = 1;//literally count number from 1 to n 1
    int i, j;

    while (looptime--) {
        i=startx;j=starty; // set zero when we get back to the start of loop
        for(j=starty;j<starty + n- offset;j++)// update the row value of matrix, i
        {
            result[startx][j] = count++;
        }
        for(i=starty;i<starty + n- offset;i++)
        {
            result[i][j] = count++;
        }
        for(;j>starty;j--)
        {
            result[i][j] = count++;
        }
        for(;i>startx;i--)
        {
            result[i][j] = count++;
        }
        startx++;
        starty++;
        offset+=2;

    }
    if(n%2){
        result[mid][mid] = count;
    }

    return result;
}

//review spiral matrix on 20250214
vector<vector<int>> Solution::reviewSpiralmatrix(int n )
{
    vector<vector<int>> res(n,vector<int>(n,0)); //construct a vector made by zeros, grammar
    /*remember some key points,some time invariant,and variant
    first the prinple of left inclusive and right exclusive
    second the length of every for loop will be start index plus n minus offset
    ,whcih is a variant value through the loop time decrease
    */
   int loop = n / 2; // divide / performs floor division
   int offset = 1; // to calculate the lengeh
   int startx = 0; // start x point for every new loop, downward, the row index of matrix
   int starty = 0; // similar to above
   int i,j;//
   int count = 1;//cumulative assignment for matrix
   int mid = n/2;
   while(loop--)//
   {
        i = startx; j = starty;
        for(j=starty;j<starty+n-offset;j++)//left inclusive and right exclusive
        {
            res[i][j]=count++; // assignment for first outermost row
        }
        for(i=startx;i<startx+n-offset;i++)
        {
            res[i][j]=count++; //right outermost column
        }
        for(;j>starty;j--)
        {
            res[i][j]=count++;
        }
        for(;i>startx;i--)
        {
            res[i][j]=count++;
        }
        offset+=2;
        startx++;starty++;
    }
    if(n%2)
    {
        res[mid][mid]=n*n;
    }
    return res;

}

ListNode* solution2::removeElements(ListNode* head,int val)
{//delete the head node,similar with destructor to clean up any allocated memory
    /*The active selection is a `while` loop that iterates through a linked list and 
    removes nodes from the head of the list as long as certain conditions are met. 
    Specifically, it continues to delete nodes while the head pointer is not `NULL` 
    and the value stored in the head node (`head->val`) is equal to a specified value (`val`).
    The condition `head != NULL` ensures that the loop only runs if there are still nodes 
    in the list. The condition `head->val == val` checks if the value of the current head 
    node matches the specified value `val`.

    */
    while(head != NULL&&head->val==val)
    {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
    //delete the other nodes
    ListNode* cur = head;
    while(cur!=NULL&&cur->next!=NULL)//iterate through all nodes
    {   
        if(cur->next->val==val){ //if the ele behind head is the target
            ListNode* temp = cur;// to safely deallocate the memory
            cur->next = temp->next->next;
            delete temp;//deallocate
        } else {
            cur = cur->next;//check next one
        }

    }
    return head;
}

ListNode *solution2::removeElementsWithSentinel(ListNode *head, int val)
{   ListNode* sentinel = new ListNode(0);//set a dummy object, a virtual head
    sentinel->next = head;
    ListNode* cur = sentinel;//cur is a auxilary variable does not affect the list
    while (cur->next!=NULL)
    {   if (cur->next->val==val)
            {
                ListNode* temp = cur->next;
                cur->next = cur->next->next;
                delete temp;
            }
        else{
            cur = cur->next;
        }
    

    }
    head = sentinel->next;
    delete sentinel;

    return head;
}

int LinkedList::get(int index) //index start at first acutal node contains a value
{   if (index>(_size-1)||index<0)
    {
        return -1;
    }
    Listnode* cur = _dummyhead->next;/*just a pointer,not a new node*/
    while (index--)
    {
        cur = cur->next;// without a *
    }
    return cur->val;
    }

void LinkedList::addAthead(int val)
{
    Listnode* newNode = new Listnode(val);
    newNode->next = _dummyhead->next;
    _dummyhead->next = newNode;
    _size++;
}

void LinkedList::addAttail(int val)
{
    //wrong: Listnode* cur = new Listnode(0); already have a dummyhead equals 0
    //wrong "cur = _dummyhead->next;" what if it's an empty list
    Listnode* cur = _dummyhead;
    while(cur->next!=NULL){cur = cur->next;}
    Listnode* newNode = new Listnode(val);
    cur->next = newNode;
    //delete cur; wrong, cur is NOT is temperoary node.It's a pointer point to elements within list
    _size++;
}

void LinkedList::addAtIndex(int index, int val)
{
    if(index>_size){return; }
    Listnode* newNode = new Listnode(val);
    Listnode* cur = _dummyhead;//attention to the previous Get function
    while (index--)
    {
        cur = cur->next;
    }/*after this loop,cur points at the last node of list*/
    newNode->next = cur->next;
    cur->next = newNode;
    _size++;
    
}

void LinkedList::removeAtIndex(int index)
{
    if(index>(_size-1)||index<0){
        std::cerr << "wrong index" << std::flush;
        return ;
    }
    Listnode* cur = _dummyhead;
    while (index--)
    {
        cur = cur->next;//now cur locates just before index
    }
    Listnode* tmp = cur->next;
    cur->next = tmp->next;
    delete tmp;
    _size--;

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

void LinkedList::printlinkedlist()
{
    Listnode* cur = _dummyhead;
    while(cur->next!=NULL){
        std::cout<< cur->next->val<<" ";
        cur = cur->next;
    }
    std::cout << std::endl;
}
