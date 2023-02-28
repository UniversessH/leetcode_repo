/*
 * @lc app=leetcode.cn id=18 lang=typescript
 *
 * [18] 四数之和
 */

// @lc code=start
function fourSum(nums: number[], target: number): number[][] {
  nums.sort((a, b) => a - b);
  let res: number[][] = [];
  let first: number, second: number, third: number, fourth: number;
  for (first = 0; first < nums.length; first++) {
    if (first > 0 && nums[first - 1] === nums[first]) {
      continue;
    }
    for (second = first + 1; second < nums.length; second++) {
      if (second > first + 1 && nums[second - 1] === nums[second]) {
        continue;
      }
      third = second + 1;
      fourth = nums.length - 1;
      while (third < fourth) {
        let sum = nums[first] + nums[second] + nums[third] + nums[fourth];
        if (sum === target) {
          res.push([nums[first], nums[second], nums[third], nums[fourth]]);
          third++;
          fourth--;
          while (nums[third - 1] === nums[third]) {
            third++;
          }
          while (nums[fourth + 1] === nums[fourth]) {
            fourth--;
          }
        } else if (sum < target) {
          third++;
        } else {
          fourth--;
        }
      }
    }
  }
  return res;
}
// @lc code=end
