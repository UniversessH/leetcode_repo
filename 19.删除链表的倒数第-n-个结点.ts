/*
 * @lc app=leetcode.cn id=19 lang=typescript
 *
 * [19] 删除链表的倒数第 N 个结点
 */

// @lc code=start
// Definition for singly-linked list.
class ListNode {
  val: number;
  next: ListNode | null;
  constructor(val?: number, next?: ListNode | null) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
}

// 涉及删除头节点记得使用虚拟头节点
function removeNthFromEnd(head: ListNode | null, n: number): ListNode | null {
  let dummyHead: ListNode = new ListNode(0, head);
  let fast: ListNode = dummyHead,
    slow: ListNode = dummyHead;
  while (n--) {
    fast = fast.next!;
  }
  fast = fast.next!;
  while (fast) {
    slow = slow.next!;
    fast = fast.next!;
  }
  slow.next = slow.next!.next;
  return dummyHead.next;
}
// @lc code=end
