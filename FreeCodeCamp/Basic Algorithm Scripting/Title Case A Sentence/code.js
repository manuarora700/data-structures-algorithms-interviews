function titleCase(str) {
  str = str.toLowerCase()
    .split(' ')
    .map((s) => s.charAt(0).toUpperCase() + s.substring(1))
    .join(' ');

    return str;
}

titleCase("I'm a little tea pot");
