// virtual class using reference
#include<iostream>
using namespace std;
class one{
public:
  void display(){
    cout<<"in class one"<<endl;
  }
};
class oneofone: public one{
public:
  void display(){
    cout<<"in class oneofone"<<endl;
  }
};
class twoofone: public one{
public:
  void display(){
    cout<<"in class twoofone"<<endl;
  }
};
int main()
{

  oneofone o;
  twoofone t;
  one &x=o;
  x.display();
  one &y=t;
  y.display();
  return 0;

}
