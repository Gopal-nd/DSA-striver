// inheritance : when the properties & member functions of base class are passed on the deried class 
// eg : parent to child | child will have the acces of the parrent properties


#include<bits/stdc++.h>
using namespace std;


class Human {
public:
  string name;
  string gender;

  Human(string n,string a){
    this->name = n;
    this->gender = a;
    cout << "This is the Parent constructor";

  }
};

class Student:public Human{
public:
  int rollno;

  Student(string n,string a, int r) : Human(n,a){
  
    this->rollno=r;
  }
  void info(){
    cout << name << endl;
    cout << gender<< endl;
    cout << rollno;
  }
};

int main(){
  Student s("Boss","Male",16712);
  s.info();
}
