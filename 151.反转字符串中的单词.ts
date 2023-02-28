/*
 * @lc app=leetcode.cn id=151 lang=typescript
 *
 * [151] 反转字符串中的单词
 */

// @lc code=start
function reverseWords(s: string): string {
  // return s.split(' ').reverse().filter(i => i.trim()).join(" ");

  function deleteExtraSpace(s: string[]): void {
    let slow = 0;
    const strLength: number = s.length;
    for (let i = 0; i < strLength; i++) {
      if (s[i] !== " ") {
        if (slow !== 0) s[slow++] = " ";
        while (i < strLength && s[i] !== " ") {
          s[slow++] = s[i++];
        }
      }
    }
    s.length = slow;
  }

  function reverseString(s: string[], start: number, end: number) {
    let temp: string = "";
    while (start < end) {
      temp = s[start];
      s[start] = s[end];
      s[end] = temp;
      start++;
      end--;
    }
  }

  let resArr = s.split("");
  deleteExtraSpace(resArr);
  reverseString(resArr, 0, resArr.length - 1);
  let start: number = 0,
    end: number = 0;
  while (start < resArr.length) {
    end = start;
    while (end < resArr.length && resArr[end] !== " ") {
      end++;
    }
    reverseString(resArr, start, end - 1);
    start = end + 1;
  }

  return resArr.join("");
}
// @lc code=end
