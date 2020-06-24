function largestOfFour(arr) {
  let result = [];

  for(let i = 0; i < 4; i++) {
    let length = -Infinity;
    for(let j = 0; j < arr[i].length; j++) {
      if(arr[i][j] > length) length = arr[i][j];
    }
    result.push(length);
  }
  console.log(result);
  return result;
}

largestOfFour([[4, 5, 1, 3], [13, 27, 18, 26], [32, 35, 37, 39], [1000, 1001, 857, 1]]);
