import 'dart:collection';

void main(){

  // String type
  var list = new List<String>();
  list.add("Saqib");
  list.add("25");
  print(list);

  // double type list
  var lis = new List<double>();

  lis.add(25.558);
  lis.add(25.541);
  print(lis);

  // integer type list
  var l = new List<int>();
  l.add(25);
  l.add(45);
  print(l);



  // Generics for map, set, hashmap 
  var map = new Map<int, String>();
  var set = new Set<double>();
  var hashMap = new HashMap<String, int>();
}