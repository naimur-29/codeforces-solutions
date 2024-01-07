type JSONValue = null | boolean | number | string | JSONValue[] | { [key: string]: JSONValue };
type ArrayType = { "id": number } & Record<string, JSONValue>;

function join(arr1: ArrayType[], arr2: ArrayType[]): ArrayType[] {
	const res: ArrayType[] = [];
	const indices: Record<number, number> = {};

	for (const ele of arr1) {
		const index = indices[ele.id];
		if (index !== undefined) {
			res[index] = {...res[index], ...ele};
		} else {
			indices[ele.id] = res.length;
			res.push(ele);
		}
	}

	for (const ele of arr2) {
		const index = indices[ele.id];
		if (index !== undefined) {
			res[index] = {...res[index], ...ele};
		} else {
			indices[ele.id] = res.length;
			res.push(ele);
		}
	}
	res.sort((a, b) => a.id - b.id);
	return res;
}

const arr1 = [{"id":2,"b":{"b": 94},"v":[4,3],"y":48}];

const arr2 = [{"id":1,"b":{"c": 84},"v":[1,3]}];

console.log(join(arr1, arr2));
