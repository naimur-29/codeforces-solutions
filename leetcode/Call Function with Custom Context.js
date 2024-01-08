Function.prototype.callPolyfill = function(context, ...args) {
	return this.apply(context, args);
}

const fn = function tax(price, taxRate) {
	return `The Cost of the ${this.item} is ${price * taxRate}`;
}

console.log(fn.callPolyfill({item: "apple"}, 100, 1.2));
