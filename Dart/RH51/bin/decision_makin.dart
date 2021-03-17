import 'dart:io';

void main(){
  stdout.write("your age: ");
  var age = int.parse(stdin.readLineSync());
  // var age = 27;

  print("if else condistions");
  if(age>70){
    print("Man");
  }else if(age>18){
    print("Adult");
  }
  else{
    print("Child");
  }

  print("switch condition");
  stdout.write("Your token: ");
  var token = int.parse(stdin.readLineSync());

  switch(token){
    case 0:
        print("I'm sorry!");
        break;
    case 1:
        print("You are welcome! Congratulations!");
        break;
    default:
        print("Please take a seat and wait");
        break;
  }
}