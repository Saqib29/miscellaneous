import 'dart:collection';

void main() {
  var hashMap = new HashMap();

  hashMap.addAll({
    "name": "saqib",
    "fname": "Aminul Islam",
    "lname": "Saqib"
  });

  print(hashMap);

  hashMap.remove("name");
  print(hashMap);

  for(var values in hashMap.values) {
    print(values);
  }

}