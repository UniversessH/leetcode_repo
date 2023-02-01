/*
 * @lc app=leetcode.cn id=24 lang=typescript
 *
 * [24] 两两交换链表中的节点
 */

// @lc code=start
// Definition for singly-linked list.

// class ListNode {
//   val: number;
//   next: ListNode | null;
//   constructor(val?: number, next?: ListNode | null) {
//     this.val = val === undefined ? 0 : val;
//     this.next = next === undefined ? null : next;
//   }
// }

function swapPairs(head: ListNode | null): ListNode | null {
  let dummyHead: ListNode = new ListNode(0, head);
  let current: ListNode | null = dummyHead;
  while (current && current.next && current.next.next) {
    let firstNode: ListNode = current.next;
    let secondNode: ListNode = current.next.next;
    let thirdNode: ListNode | null = current.next.next.next;
    current.next = secondNode;
    secondNode.next = firstNode;
    firstNode.next = thirdNode;
    current = firstNode;
  }
  return dummyHead.next;
}
// @lc code=end
