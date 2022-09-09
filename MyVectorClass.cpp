#include <string>
#include <iostream>
using namespace std;

class MyStringVector{
  string *ptr;
  int count;
  
  public:
    MyStringVector(int n, string *p);
    MyStringVector(MyStringVector &obj);
    void display();
};

MyStringVector :: MyStringVector(int n, string *p){
  ptr = p;
  count = n;
}

MyStringVector :: MyStringVector(MyStringVector &obj){
  ptr = new string[obj.count];
  for(int i = 0; i < obj.count; i++){
    ptr[i] = obj.ptr[i];
  }
  count = obj.count;
}

void MyStringVector :: display(){
  for(int i = 0; i < count; i++) 
    cout << ptr[i] << endl;
}

int main(){
  int n; 
  cin >> n;
  string *s = new string[n];
  for(int i = 0; i < n; i++)
    cin >> s[i];
  
  MyStringVector obj1(n, s);
  MyStringVector obj2(obj1);

  cout << "Object 1" << endl;
  obj1.display();
  cout << "Object 2" << endl;
  obj2.display();

  delete[] s;
  return 0;
}