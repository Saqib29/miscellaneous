void main() {
  int i = 2;
  while (true) {
    i++;
    if (i == 15) {
      continue;
    }
    print(i);
    if (i == 20) {
      break;
    }
  }

  var x = 0;
  do {
    print(x);
    x++;
  } while (x < 3);
}
