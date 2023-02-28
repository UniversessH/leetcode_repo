/*
 * @lc app=leetcode.cn id=383 lang=typescript
 *
 * [383] 赎金信
 */

// @lc code=start
function canConstruct(ransomNote: string, magazine: string): boolean {
  let helperArray: number[] = new Array(26).fill(0);
  const base = "a".charCodeAt(0);
  magazine
    .split("")
    .forEach((item) => helperArray[item.charCodeAt(0) - base]++);
  ransomNote
    .split("")
    .forEach((item) => helperArray[item.charCodeAt(0) - base]--);
  return helperArray.every((val) => val >= 0) ? true : false;
}
// @lc code=end
