console.log("logged!");

const once = fn => {
    let called = false;
    return function(...args) {
        if (called) return undefined;
        called = true;
        return fn(...args);
    }
};


const fn = once((a, b, c) => a + b + c);

console.log(fn(1, 2, 3));
console.log(fn(2, 3, 4));
