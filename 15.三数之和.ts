/*
 * @lc app=leetcode.cn id=15 lang=typescript
 *
 * [15] 三数之和
 */

// @lc code=start
function threeSum(nums: number[]): number[][] {
  let res: number[][] = [];
  // let res: Array<Array<number>>
  let sum: number;
  let left: number, right: number;
  nums.sort((a, b) => a - b);
  for (let i = 0; i < nums.length; i++) {
    if (nums[i] > 0) {
      return res;
    }
    if (i > 0 && nums[i] === nums[i - 1]) {
      continue;
    }
    left = i + 1;
    right = nums.length - 1;
    while (left < right) {
      sum = nums[left] + nums[i] + nums[right];
      if (sum === 0) {
        res.push([nums[left], nums[i], nums[right]]);
        left++;
        right--;
        while (nums[left - 1] === nums[left]) {
          // left--;
          left++;
        }
        while (nums[right + 1] === nums[right]) {
          // right++;
          right--;
        }
      } else if (sum < 0) {
        left++;
      } else {
        right--;
      }
    }
  }
  return res;
}
// @lc code=end
