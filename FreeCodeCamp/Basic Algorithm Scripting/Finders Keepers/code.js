function findElement(arr, func) {
  
  for(let i = 0; i < arr.length; i++) {
    if(func(arr[i])) return arr[i]
  }


  return undefined;
}

findElement([1, 2, 3, 4], num => num % 2 === 0);
