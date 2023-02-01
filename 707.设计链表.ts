/*
 * @lc app=leetcode.cn id=707 lang=typescript
 *
 * [707] 设计链表
 */

class ListNode {
  val: number;
  next: ListNode | null;
  constructor(val?: number, next?: ListNode | null) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
}

// 任何操作如果影响了头尾节点中的一个，要注意另一个节点可能产生的变化
// @lc code=start

class MyLinkedList {
  private size: number;
  private head: ListNode | null;
  private tail: ListNode | null;

  constructor() {
    this.size = 0;
    this.head = null;
    this.tail = null;
  }

  get(index: number): number {
    if (index < 0 || index >= this.size) {
      return -1;
    }
    let Node = this.getNodeByIndex(index);
    return Node.val;
  }

  addAtHead(val: number): void {
    let newHead = new ListNode(val, this.head);
    this.head = newHead;
    // !!当修改头尾节点的时候要注意链表长度 / 头尾状态，尾节点都没有说明一个节点都没有
    if (!this.tail) this.tail = newHead;
    this.size++;
  }

  addAtTail(val: number): void {
    let newTail = new ListNode(val, null);
    if (this.tail) {
      this.tail.next = newTail;
    } else {
      //!!当修改头尾节点的时候要注意链表长度 / 头尾状态，尾节点都没有说明一个节点都没有
      this.head = newTail;
    }
    this.tail = newTail;
    this.size++;
  }

  addAtIndex(index: number, val: number): void {
    if (index === this.size) {
      this.addAtTail(val);
    // 下面这个等于号漏了会出问题！<=0 就是在头部插入
    } else if (index <= 0) {
      this.addAtHead(val);
    } else if (index > this.size) {
      return;
    } else {
      let newNode = new ListNode(val, null);
      let prevNode = this.getNodeByIndex(index - 1);
      let curNode = this.getNodeByIndex(index);
      (prevNode.next = newNode), (newNode.next = curNode);
      this.size++;
    }
  }

  deleteAtIndex(index: number): void {
    if (index < 0 || index >= this.size) return;
    if (index === 0) {
      this.head = this.head!.next;
      // !!如果链表中只有一个元素，删除头节点后，需要处理尾节点
      if (this.size === 1) this.tail = null;
      this.size--;
    } else if (index === this.size - 1) {
      let prevNode = this.getNodeByIndex(this.size - 2);
      prevNode.next = null;
      this.tail = prevNode;
      this.size--;
    } else {
      let prevNode = this.getNodeByIndex(index - 1);
      prevNode.next = prevNode.next!.next;
      this.size--;
    }
  }

  private getNodeByIndex(index: number): ListNode {
    let curNode = new ListNode(0, this.head);
    for (let i = 0; i <= index; i++) {
      curNode = curNode.next as ListNode;
    }
    return curNode;
  }
}

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * var obj = new MyLinkedList()
 * var param_1 = obj.get(index)
 * obj.addAtHead(val)
 * obj.addAtTail(val)
 * obj.addAtIndex(index,val)
 * obj.deleteAtIndex(index)
 */
// @lc code=end
