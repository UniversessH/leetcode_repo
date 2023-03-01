function reverseLeftWords(s: string, n: number): string {
  function reverseString(arr: string[], start: number, end: number) {
      while (start < end) {
          let temp = arr[start];
          arr[start] = arr[end];
          arr[end] = temp;
          start++;
          end--;
      }
  }
  let resArr: string[] = s.split('');
  reverseString(resArr, 0, n - 1);
  reverseString(resArr, n, resArr.length - 1);
  reverseString(resArr, 0, resArr.length - 1);
  return resArr.join('');
};