function repeatStringNumTimes(str, num) {
  if(num <= 0) return "";
  let initial = str;
  for(let i = 0; i < num - 1; i++) {
    str = str + initial;
  }

  return str;
}

repeatStringNumTimes("*", 8);
