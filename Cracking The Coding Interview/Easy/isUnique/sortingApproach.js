const isUnique = (str) => {
  let sortedStr = str.split("").sort().join("");
  let isUnique = true;
  let prevChar = "";
  [...sortedStr].forEach((strChar, idx) => {
    if (strChar === prevChar) {
      isUnique = false;
      return;
    } else {
      prevChar = strChar;
    }
  });
  return isUnique;
};

let str = "abcdefhghijklmnopqrstuvwxyz";
console.log(isUnique(str));
