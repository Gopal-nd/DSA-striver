
#include<bits/stdc++.h>
using namespace std;

class Student{
private:
  string salary;
// this memory is stored by the stack in compile time 
// if the data is provieded in daynamical way it is tored in the heap
  //
public:
  string name;
  //double cgpa;
  double* cgpaPtr;
  Student(string n,double a){
    this->name = n;
//    this->cgpa =a;
    cgpaPtr = new double;
    cout << "cgpaptr value " << cgpaPtr<<"    "<<*cgpaPtr << endl;
    *cgpaPtr = a;
    cout << "star *cgpaPtr value is : " << *cgpaPtr << " without the start cgpactr" << cgpaPtr<< endl;
    cout << "This is the constructor ";
  }
  Student(Student &obj){
    this->name = obj.name;
 //   this->cgpaPtr = obj.cgpaPtr;
    //   DYNAMIC MENORY ALLOCATED  DEEP MEMORY
    cgpaPtr = new double;
    *cgpaPtr = *obj.cgpaPtr;
    cout << "This is the copy of the constructor Shallow"<< endl;
  }
  
 ~Student(){
    cout << "this is the destructor";
    delete cgpaPtr;
  }
  void getInfo(){
    cout << "name : "<<name<< endl;

//    cout << "cgpa : "<<cgpa<< endl;
    cout << "cgpa : " << *cgpaPtr << endl;
  }


  
};

int main(){
  Student t1("boos",8.6);
  Student t2(t1);

  t1.getInfo();
  t2.name = "rajesh";
  *(t2.cgpaPtr) = 10.0;
  Student t3(t1);

  t1.getInfo();
  t2.getInfo();
  t3.getInfo();
  return 0;
}

