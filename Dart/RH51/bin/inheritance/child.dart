import './base.dart';

class ChildClass extends BaseClass{

  @override
  void Name(){
    print("Serfee Anam Islam");
  }

  void sum(){
    print("Country -> ${super.country}");
    super.addTwo();
    super.multiple();
    super.Name();
  }

}