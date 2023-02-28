/*
 * @lc app=leetcode.cn id=454 lang=typescript
 *
 * [454] 四数相加 II
 */

// @lc code=start
function fourSumCount(
  nums1: number[],
  nums2: number[],
  nums3: number[],
  nums4: number[]
): number {
  let helperMap: Map<number, number> = new Map();
  let tempVal: number | undefined;
  let res = 0;
  for (let i of nums1) {
    for (let j of nums2) {
      tempVal = helperMap.get(i + j);
      helperMap.set(i + j, tempVal ? tempVal + 1 : 1);
    }
  }
  for (let i of nums3) {
    for (let j of nums4) {
      tempVal = helperMap.get(0 - i - j);
      if (tempVal) {
        res += tempVal;
      }
    }
  }
  return res;
}
// @lc code=end
