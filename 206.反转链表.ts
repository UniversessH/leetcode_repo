/*
 * @lc app=leetcode.cn id=206 lang=typescript
 *
 * [206] 反转链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 */
// class ListNode {
//   val: number;
//   next: ListNode | null;
//   constructor(val?: number, next?: ListNode | null) {
//     this.val = val === undefined ? 0 : val;
//     this.next = next === undefined ? null : next;
//   }
// }

function reverseList(head: ListNode | null): ListNode | null {
  function reverse(
    currNode: ListNode | null,
    prevNode: ListNode | null
  ): ListNode | null {
    if (currNode === null) {
      return prevNode;
    }
    let tempNode = currNode.next;
    currNode.next = prevNode;
    prevNode = currNode;
    currNode = tempNode;
    return reverse(currNode,prevNode);
  }
  return reverse(head, null);
}
// @lc code=end
