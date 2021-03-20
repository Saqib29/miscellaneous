
class myCLass{

  // global variable
  var name = "Saqib";

  String printName(){
    print(name);
    
    return "Aminul";
  }

  String age(){
    var age = "25";
    return age;
  }

}


void main(){
  var obj = new myCLass();

  obj.printName();
  print("Age - ${obj.age()}" );
}