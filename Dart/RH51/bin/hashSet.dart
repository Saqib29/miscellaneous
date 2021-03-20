
import 'dart:collection';

void main(){
  var hashSet = new HashSet();

  hashSet.addAll(["Saqib", "Aminul", "Aminul Islam", "Saqib Aminul", "Aminul Islam Saqib", "Saqib AMinul Islam"]);

  print(hashSet);

  hashSet.remove("Saqib");
  print(hashSet);

  for (var i in hashSet){
    print(i);
  }
}