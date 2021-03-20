void main(){
  div();


  try {  
    divisions();
  } catch (e) {
    print(e);
  }

}

void div(){
  int a=10;
  int b=0;
  int result;

  try {
    result = a ~/ b;
    print(result);
  } catch (e) {
    print(e);
  }

}

void divisions(){
  int a=30;
  int b=0;

  int result = a ~/ b;

  print(result);

 throw new Exception();
}