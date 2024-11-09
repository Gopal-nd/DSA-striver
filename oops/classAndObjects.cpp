#include<iostream>
#include<string>
using namespace std;

class Teacher {
  // access modifiers
  private:
  double salary;
  
public:
  // properties/ atributes
  string name;
  string age;
  string dept;

  //function to change the private value
  
  //setter value
  void setSalary(double s){
    if(s>=0) salary = s;
  }
  //getter value

  double getSalary(){
    return salary;
  }
};


int main(){
  Teacher t1;
  t1.name = "Boss";
  t1.age = "25";
  t1.dept = "CSE";

  t1.setSalary(10000);
  cout << t1.name <<"\n" << t1.getSalary()<<endl;
  return 0;
    

}
