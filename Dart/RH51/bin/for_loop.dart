
void main() {

  print("Set");
  // loop in set
  var mySet = new Set();

  mySet.add(100);
  mySet.add(200);
  mySet.add(200);
  mySet.add(400);

  for (var i in mySet) {
    print(i);
  }


  print("List ");
  // loop in list
  var list = new List();

  list.add(10);
  list.add(20);
  list.add(30);
  list.add(40);
  list.add(50);

  for(var i in list) {
    print(i);
  }
}