import './child.dart';
import './base.dart';

void main(){

  // var base = new BaseClass();
  // base.addTwo();

  var obj = new ChildClass();

  obj.Name();

  obj.addTwo();
  obj.multiple();
}