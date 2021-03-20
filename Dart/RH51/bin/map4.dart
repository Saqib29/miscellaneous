void main(){
  var map = new Map();

  map.addAll({
    "fname" : "Saqib",
    "lname" : "Aminul",
    "age"   : 25
  });

  print(map);
  map.clear();
  print(map);


  map.addAll({"name" : "saqib aminul islam", "fname" : "Saqib", "lname" : "Aminul"});
  print(map);

  map.remove("name");
  print(map);

}