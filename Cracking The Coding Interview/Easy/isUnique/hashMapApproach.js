// Time - O(n)
// Space - O(n)

const isUnique = (str) => {
  let map = {};
  let isUnique = true;

  [...str.split("")].forEach((strChar, idx) => {
    if (map[strChar]) {
      isUnique = false;
      return;
    } else {
      map[strChar] = true;
    }
  });
  return isUnique;
};

let str = "manu";
console.log(isUnique(str));
