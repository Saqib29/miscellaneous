import 'dart:io';
import './MyClass.dart';

void main(){
  var dad = new MyClass("Saqib", "Aminul");
  stdout.write("Father Name: ");
  dad.Name();

  var son = MyClass("Sarfee", "Anam");
  stdout.write("Son name: ");
  son.Name();
   
}