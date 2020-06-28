function truncateString(str, num) {
  if(num < str.length) {
    let substring = str.substr(0, num);
    substring = substring + "...";
    console.log(substring);
    return substring;
  }
  else {

  return str;
  }
}

truncateString("A-tisket a-tasket A green and yellow basket", 8);
