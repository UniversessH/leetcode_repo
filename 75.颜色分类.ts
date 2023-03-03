/*
 * @lc app=leetcode.cn id=75 lang=typescript
 *
 * [75] 颜色分类
 */

// @lc code=start
/**
 Do not return anything, modify nums in-place instead.
 */
function sortColors(nums: number[]): void {
  let areaPointer: number = 0;
  const length = nums.length;
  for(let i = 0; i < length; i++){
    if(nums[i] === 0){
      let temp = nums[i];
      nums[i] = nums[areaPointer];
      nums[areaPointer] = temp;
      areaPointer++;
    }
  }
  for(let i = areaPointer; i < length; i++){
    if(nums[i] === 1){
      let temp = nums[i];
      nums[i] = nums[areaPointer];
      nums[areaPointer] = temp;
      areaPointer++;
    }
  }
};
// @lc code=end

