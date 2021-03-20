
void main() {
  // m_yfunction();
  // print(re_funtion());

  // print(func());

  print(addTow(2,3));
}

void m_yfunction(){
  int a = 10;
  int b = 20;
  print(a+b);
}

int re_funtion(){
  int a=10;
  int b=30;
  int c = a+b;

  return c;
}

List func(){
  var list = new List();
  list.addAll([1,2,3,4,5,6]);
  return list;
}

int addTow(var a, var b){
  return a+b;
}