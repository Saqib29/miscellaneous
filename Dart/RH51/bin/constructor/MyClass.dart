
class MyClass{
  
  // Contructor method rules 
  // Same name as Class name
  // not return Type 
  // Automatic call when object created 

  var fname;
  var lname;
  
  MyClass(){
    this.fname = "Sarfee";
    this.lname = "Anam";
  }

  void Name(){
    print("Saqib Aminul Islam");
  }

  void SonName(){
    print("${this.fname} ${this.lname}");
  }
}