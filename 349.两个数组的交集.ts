/*
 * @lc app=leetcode.cn id=349 lang=typescript
 *
 * [349] 两个数组的交集
 */

// @lc code=start
function intersection(nums1: number[], nums2: number[]): number[] {
  // let nums1Set: Set<number> = new Set(nums1);
  // let resSet: Set<number> = new Set();
  // for (let i of nums2) {
  //   if (nums1Set.has(i)) {
  //     resSet.add(i);
  //   }
  // }
  // return Array.from(resSet);
  return Array.from(new Set(nums1.filter(i => nums2.includes(i))))
}
// @lc code=end
