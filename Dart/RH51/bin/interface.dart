
void main() {
  var obj = new normal();

  obj.name();
  obj.age();
  obj.profession();
  
}

class normal implements interfaceClass{

  void name(){
    print("Aminul Islam Saqib");
  }
  void age(){
    print(25);
  }
  void profession(){
    print("Software Engineer");
  }


}

class interfaceClass{

  void name(){}
  void age(){}
  void profession(){}

}