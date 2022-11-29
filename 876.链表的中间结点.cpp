/*
 * @lc app=leetcode.cn id=876 lang=cpp
 *
 * [876] 链表的中间结点
 */
#include <iostream>
#include <vector>
using namespace std;
// @lc code=start

// Definition for singly-linked list.
// struct ListNode
// {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        //单指针法
        // int length = 0;
        // ListNode *current = head;
        // while (current != nullptr)
        // {
        //     length++;
        //     current = current->next;
        // }
        // current = head;
        // int j = 0;
        // while (j < length / 2)
        // {
        //     j++;
        //     current = current->next;
        // }
        // return current;

        // 双指针法
        // ListNode *slow = head, *fast = head;
        // while (fast != nullptr && fast->next != nullptr)
        // {
        //     slow = slow->next;
        //     fast = fast->next->next;
        // }
        // return slow;
    }
};
// @lc code=end
