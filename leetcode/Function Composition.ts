type F = (x: number) => number;

function compose(functions: F[]): F {
  return function (x) {
    let res = x;
    for (let i = functions.length - 1; i >= 0; i--) {
      res = functions[i](res);
    }
    return res;
  };
}

const fun = (x: number) => 2 * x;
const test1 = [fun, fun, fun];

const composed = compose(test1);

console.log(composed(2));
