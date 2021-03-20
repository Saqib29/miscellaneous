import 'dart:collection';
import 'dart:io';
import 'dart:core';

void main(){
  var hashMap = new HashMap();

  hashMap["name"] = "Saqib";
  hashMap["age"] = 25;
  hashMap["full_name"] = "Aminul Islam Saqib";

  stdout.write("HashMap -> ");
  print(hashMap);

  stdout.write("HashMap keys -> ");
  print(hashMap.keys);

  stdout.write("HashMap values -> ");
  print(hashMap.values);

  for (var i in hashMap.keys){
    print(hashMap[i]);
  }

  hashMap.clear();
  print(hashMap);
}