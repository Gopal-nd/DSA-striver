////
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Teacher {
//  // access modifiers
//  private:
//  double salary;
//  
//public:
//
//  // creating the constructor 
//  // 1. run each time the object is created
//  // 2. used to intailze some value in the 
//  Teacher(){
//    cout << "Constructor called : Created Object";
//  }
//  // properties/ atributes
//  string name;
//  string age;
//  string dept;
//
//  //function to change the private value
//  
//  //setter value
//  void setSalary(double s){
//    if(s>=0) salary = s;
//  }
//  //getter value
//
//  double getSalary(){
//    return salary;
//  }
//};
//
//
//int main(){
//  Teacher t1;
//  t1.name = "Boss";
//  t1.age = "25";
//  t1.dept = "CSE";
//
//  t1.setSalary(10000);
//  cout << t1.name <<"\n" << t1.getSalary()<<endl;
//  return 0;
//    
//
//}


//#include <iostream>
//using namespace std;

//class Person {
//public:
 //   string name;
   // int age;

    // Parameterized constructor
//    Person(string n, int a) {
//        name = n;
  //      age = a;
//        cout << "Constructor called: Name = " << name << ", Age = " << age << endl;
//    }
//};

//int main() {
    // Creating an object using parameterized constructor
//    Person p1("John", 25);
//    Person p2("Alice", 30);

//    return 0;
//}


#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    // Constructor
    Person(string n, int a) : name(n), age(a) {
        cout << "Constructor called: Name = " << name << ", Age = " << age << endl;
    }

    // Destructor
    ~Person() {
        cout << "Destructor called: Object destroyed!" << endl;
    }
};

int main() {
    Person p1("John", 25);  // Constructor is called here
    return 0;                // Destructor is called here when p1 goes out of scope
}

