function findLongestWordLength(str) {
  let length = -Infinity;
  let strArray = str.split(" ");

  for(let i = 0; i < strArray.length; i++) {
    // console.log(strArray[word]);
    if(strArray[i].length > length) length = strArray[i].length;
  }
  // console.log(strArray);
  return length;

}

findLongestWordLength("The quick brown fox jumped over the lazy dog");
