const checkPermutation = (first, second) => {
  if (first.length !== second.length) return false;
  first = first.split("").sort().join("");
  second = second.split("").sort().join("");
  console.log("first, second->", first, second);

  if (first !== second) return false;
  return true;
};

let first = "Manu arora";
let second = "nauM arrao";

console.log(checkPermutation(first, second));
