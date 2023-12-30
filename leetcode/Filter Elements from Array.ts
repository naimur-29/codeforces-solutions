type Fn = (n: number, i: number) => any;

const filter = (arr: number[], fn: Fn): number[] => arr.filter(fn);
