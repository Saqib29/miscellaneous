void main(){
  print("for loop");
  for (var i = 0; i < 100; i++) {
    if(i%10 == 0){
      print("${i} - value");
      continue;
    }
  }

  print("while loop");
  int i=0;
  while (i<100) {
    if(i%10 == 0){
      print("${i}");
    }
    i++;
  }

  print("do..while loop");
  int j = 0;
  do {
    if(i%10 == 0){
      print("${j}");
    }
    j++;
  } while (j<99);
}