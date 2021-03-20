import './Model.dart';
import 'dart:io';

void main() {
  var model = new Model();

  model.setName = stdin.readLineSync();

  print(model.getName);  
}