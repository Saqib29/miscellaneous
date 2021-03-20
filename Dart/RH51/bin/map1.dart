
void main(){

  // createing Map literal
  var myMap = {
    "name": "Saqib",
    "age": "25",
    "height": "5 feet 3 inch"
  };

  print(myMap);
  print(myMap["name"]);
  print(myMap["age"]);

  
  
  // Adding literal values to Map at runtime
  myMap['profession'] = "Software Engineer";

  print(myMap);

}