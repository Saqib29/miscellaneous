import 'dart:io';

void main(){
  // Fixed size list
  print("Fixed size list");
  var fixlist = new List(10);

  for (var i = 1; i <= fixlist.length; i++) {
    stdout.write("${i} ");
  }

  // Growable List
  print("\nGrowable List");
  var growable = new List();
  // adding value to the list
  for (var i = 1; i <= 50; i++) {
    if (i%2 == 0) {
      growable.add(i);
    }
  }

  print(growable);
}