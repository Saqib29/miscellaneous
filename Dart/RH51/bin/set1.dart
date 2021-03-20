
void main() {

  // creating Set two ways

  // one ways
  var mySet = new Set();

  mySet.add(100);
  mySet.add(200);
  mySet.add(200);
  mySet.add(400);

  print(mySet);


  // two ways
  var mySet2 = new Set.from([10,20,30,40,50, 50]);

  print(mySet2);
}