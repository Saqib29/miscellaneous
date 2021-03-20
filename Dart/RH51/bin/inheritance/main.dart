import './child.dart';
import './base.dart';

void main(){

  // var base = new BaseClass();
  // base.addTwo();

  var obj = new ChildClass();

  print("Father information:\n");
  obj.sum();

  print("Son information\n");
  obj.Name();

  obj.addTwo();
  obj.multiple();
}