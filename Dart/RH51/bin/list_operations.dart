import 'dart:io';

void main(){
  var array = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17];
  // Inserting data into list
  // List.add()
  // List.addAll()
  // List.insert()
  // List.insertAll()

  // Inserting to list
  print("Inserting using add, addAll");
  var list = new List();

  list.add(array);
  print(list);
  list.addAll(array);
  print("list -> ${list}");

  for(var i in list){
    stdout.write("$i ");
  }

  print("\nInserting to list with indexing...");
  var lis = new List();

  lis.insert(0, array);
  lis.insert(1, ['Saqib', 'Aminul', 'Islam']);
  list.insertAll(0, lis);
  print(lis);




  // Removing from List
  var l = new List();
  l.add('a');
  l.add('b');
  l.add('c');
  l.add('d');
  print("\n Removing from lis");
  print(l);
  l.remove('b');
  print(l);

  print("Removing at");
  print(lis);
  lis.removeAt(1);
  print(lis);

  l.insert(1, 'b');
  // Updating the list index
  print("Updating List");
  print(l);

  l.replaceRange(1, 2, ["Bangladesh"]);
  print(l);
  l.replaceRange(3, 4, ["Dog"]);
  print(l);
  l.replaceRange(0, 3, ["Africa", "Bangladesh", "Canada"]);
  print(l);

  l.replaceRange(3,4, ['Denmark']);
  print(l);
}