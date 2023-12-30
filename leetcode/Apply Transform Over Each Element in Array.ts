function map(arr: number[], fn: (n: number, i: number) => number): number[] {
  const res: number[] = [];
  for (let i = 0; i < arr.length; i++) res[i] = fn(arr[i], i);
  return res;
}

const test = [1, 2, 3];
const fn = (n: number, i: number) => n + i;
console.log(map(test, fn));
