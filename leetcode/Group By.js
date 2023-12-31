Array.prototype.groupBy = function (fn) {
  const res = {};
  for (const ele of this) {
    const key = fn(ele);
    if (res[key] !== undefined) res[key].push(ele);
    else res[key] = [ele];
  }
  return res;
};

const array = [{ id: "1" }, { id: "1" }, { id: "2" }],
  fn = function (item) {
    return item.id;
  };

console.log(array.groupBy(fn));
