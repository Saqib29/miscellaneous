
class MyClass{
  
  // Contructor method rules 
  // Same name as Class name
  // not return Type 
  // Automatic call when object created 

  var fname;
  var lname;
  
  MyClass(var fname, var lname){
    this.fname = fname;
    this.lname = lname;
  }

  void Name(){
    print("${this.fname} ${this.lname}");
  }

}