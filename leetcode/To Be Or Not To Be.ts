type ToBeOrNotToBe = {
  toBe: (val: any) => boolean;
  notToBe: (val: any) => boolean;
};

function expect(val1: any): ToBeOrNotToBe {
  const fn = (condition: boolean, err: string) => {
    if (!condition) throw new Error(err);
    return condition;
  };
  return {
    toBe: (val2: any) => fn(val2 === val1, "Not Equal"),
    notToBe: (val2: any) => fn(val2 !== val1, "Equal"),
  };
}
