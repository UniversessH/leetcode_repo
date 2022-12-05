/*
 * @lc app=leetcode.cn id=116 lang=cpp
 *
 * [116] 填充每个节点的下一个右侧节点指针
 */
#include <iostream>
#include <queue>
using namespace std;

// @lc code=start

// Definition for a Node.
// class Node
// {
// public:
//     int val;
//     Node *left;
//     Node *right;
//     Node *next;

//     Node() : val(0), left(NULL), right(NULL), next(NULL) {}

//     Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

//     Node(int _val, Node *_left, Node *_right, Node *_next)
//         : val(_val), left(_left), right(_right), next(_next) {}
// };

class Solution
{
public:
    Node *connect(Node *root)
    {
        if (root == nullptr)
        {
            return root;
        }
        queue<Node *> Q;
        Q.push(root);

        while (!Q.empty())
        {
            int size = Q.size();
            for (int i = 0; i < size; i++)
            {
                Node *current = Q.front();
                Q.pop();
                if (i != size - 1){
                    current->next = Q.front();
                }
                if (current->left != nullptr)
                {
                    Q.push(current->left);
                }
                if (current->right != nullptr)
                {
                    Q.push(current->right);
                }
            }
        }

        return root;
    }
};
// @lc code=end
