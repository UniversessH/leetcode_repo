/*
 * @lc app=leetcode.cn id=160 lang=typescript
 *
 * [160] 相交链表
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

function getIntersectionNode(
  headA: ListNode | null,
  headB: ListNode | null
): ListNode | null {
  let lengthA = 0,
    lengthB = 0;
  let currA: ListNode | null = headA,
    currB: ListNode | null = headB;
  while (currA) {
    lengthA++;
    currA = currA.next;
  }
  while (currB) {
    lengthB++;
    currB = currB.next;
  }
  currA = headA;
  currB = headB;
  if (lengthA < lengthB) {
    [currA, currB] = [currB, currA];
    [lengthA, lengthB] = [lengthB,lengthA];
  }
  let gap = lengthA - lengthB;
  while(gap--){
    currA = currA!.next;
  }
  while(currA && currB){
    if(currA === currB){
      return currA;
    }
    currA = currA.next;
    currB = currB.next;
  }
  return null;
}
// @lc code=end
