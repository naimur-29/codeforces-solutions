type Counter = {
  increment: () => number;
  decrement: () => number;
  reset: () => number;
};

function createCounter(init: number): Counter {
  let value = init;
  return {
    increment: () => ++value,
    decrement: () => --value,
    reset: () => (value = init),
  };
}
