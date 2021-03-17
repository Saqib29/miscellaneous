void main(){
  for (var i = 0; i < 100; i++) {
    if(i%10 == 0){
      print("${i} - value");
      continue;
    }
  }
}