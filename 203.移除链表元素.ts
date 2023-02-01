/*
 * @lc app=leetcode.cn id=203 lang=typescript
 *
 * [203] 移除链表元素
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

function removeElements(head: ListNode | null, val: number): ListNode | null {
  while (head !== null && head.val === val) {
    head = head.next;
  }
  if (head === null) return null;
  let prev: ListNode = head,
    curr: ListNode | null = head.next;
  while (curr !== null) {
    if (curr.val === val) {
      prev.next = curr.next;
    } else {
      prev = prev.next as ListNode;
    }
    curr = curr.next;
  }
  return head;
}
// @lc code=end
