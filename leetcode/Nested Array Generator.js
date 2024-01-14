console.log("hello world!");

var inorderTraversal = function*(arr) {
	for (const ele of arr) {
		if (ele instanceof Array) yield* inorderTraversal(ele);
		else yield ele;
	}
};

const arr = [1, 2, [2, 3, 3]];

const gen = inorderTraversal(arr);
console.log(gen.next());
console.log(gen.next());
console.log(gen.next());
console.log(gen.next());
console.log(gen.next());
console.log(gen.next());
console.log(gen.next());
console.log(gen.next());
