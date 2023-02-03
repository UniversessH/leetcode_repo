/*
 * @lc app=leetcode.cn id=242 lang=typescript
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
function isAnagram(s: string, t: string): boolean {
  if (s.length !== t.length) return false;
  let alphabetArr = new Array(26).fill(0);
  const dif = "a".charCodeAt(0);
  for (let i = 0; i < s.length; i++) {
    alphabetArr[s.charCodeAt(i) - dif]++;
    alphabetArr[t.charCodeAt(i) - dif]--;
  }
  return alphabetArr.every((item) => item === 0);
}
// @lc code=end
