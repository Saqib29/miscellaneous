import 'dart:io';

class MyClass {
  var name = "Saqib Aminul Islam";

  void myName(){
    print(this.name);
  }

  void age(){
    stdout.write("Name: ");
    this.myName();
    print("Age: ${25}");
  }
}

//  this keyword is optional in dart though
void main(){
  var obj = MyClass();

  obj.age();
}