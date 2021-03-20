import 'dart:io';

void main(){
  var map = new Map();

  map["name"] = "SAqib Aminul Islam";
  map["age"] = "25";
  map['profession'] = "Software Engineer";

  stdout.write("Map Size - ");
  print(map.length);
  
  stdout.write("Keys - ");
  print(map.keys);

  stdout.write("Values - ");
  print(map.values);

  stdout.write("Map - ");
  print(map);
}