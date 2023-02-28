/*
 * @lc app=leetcode.cn id=541 lang=typescript
 *
 * [541] 反转字符串 II
 */

// @lc code=start
function reverseStr(s: string, k: number): string {
  let i: number, left: number, right: number, tempStr: string;
  let resArr: Array<string> = s.split("");
  for (i = 0; i < s.length; i += 2 * k) {
    // if (s.length - i < k) {
    //   left = i;
    //   right = s.length - 1;
    // } else {
    //   (left = i), (right = i + k - 1);
    // }
    left = i;
    right = s.length - i < k ? s.length - 1 : i + k - 1;
    while (left < right) {
      tempStr = resArr[left];
      resArr[left] = resArr[right];
      resArr[right] = tempStr;
      left++;
      right--;
    }
  }
  return resArr.join("");
}
// @lc code=end
