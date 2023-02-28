/*
 * @lc app=leetcode.cn id=1 lang=typescript
 *
 * [1] 两数之和
 */

// @lc code=start
function twoSum(nums: number[], target: number): number[] {
  let helperMap: Map<number, number> = new Map();
  let resArr: number[] = [];
  for (let i = 0; i < nums.length; i++) {
    let index = helperMap.get(target - nums[i]);
    if (index !== undefined) {
      resArr = [i, index];
    } else {
      helperMap.set(nums[i], i);
    }
  }
  return resArr;
}
// @lc code=end
