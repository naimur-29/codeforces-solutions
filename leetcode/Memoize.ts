type Fn = (...params: number[]) => number;

function memoize(fn: Fn): Fn {
  let resObj = {};

  return (...args) => {
    let cache = args.join(" ");

    if (resObj[cache] === undefined) {
      let newRes = fn(...args);
      resObj[cache] = newRes;
    }
    return resObj[cache];
  };
}
