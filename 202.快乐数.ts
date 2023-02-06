/*
 * @lc app=leetcode.cn id=202 lang=typescript
 *
 * [202] 快乐数
 */

// @lc code=start
function isHappy(n: number): boolean {
  let resSet: Set<number> = new Set();
  // while (true) {
  //   if (resSet.has(n)) {
  //     return false;
  //   }
  //   if (n === 1) {
  //     return true;
  //   }
  //   resSet.add(n);
  //   n = String(n)
  //     .split("")
  //     .reduce((pre, cur) => pre + Number(cur) * Number(cur), 0);
  // }

  // 优化

  const calcSum = (num: number): number => {
    return String(n)
      .split("")
      .reduce((pre, cur) => pre + Number(cur) * Number(cur), 0);
  };
  while (n !== 1 && !resSet.has(n)) {
    resSet.add(n);
    n = calcSum(n);
  }
  return n === 1;
}
// @lc code=end
