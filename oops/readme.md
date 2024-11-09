### classes and objects

* objects are entites( an entity is an independent concept that has its own 
properties and behaviors. It represents a real-world thing, a person, a place, an idea, 
etc. that can be modeled using code.)

* class : class is like a blueprint  of the entities
eg:
scheam of a person is a classs
and actual persion with the proerties is objects

eg:

```cpp


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
```

#### Access Modifiers
by default is private in cpp
there are three types :
1. private
2. public
3. protected

### oops pillers

1. encapsulation
2. abstractions
3. inheritence
4. polymorphism


### Encapsulations
it is the wrapping  up the data and members function in asingle unit called class.

1. helps in the data hiding : Public and private 
eg:

```cpp


#include<iostream>
#include<string>
using namespace std;

class Teacher {
  // access modifiers
    // examole of encapsulation data is protected
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
```

### Constructor

special method invoked automitaicaly at the time of object creation 

1. used for the initailesations
2. same name as class
3. only called once , at the objects creation


types of the costructors
1. Default Constructors
2. Parameteriaed constructors
3. copy constructors
4. move Constructors

#### Default Constructor 

```cpp

#include<iostream>
using namespace std;

class Bank{
private:
    int balance;
public:
    Bank(){
        cout << "Account created successfuly";
    }
    string name;
    int age;

};

int main(){
    Bank b;
    return 0;
}
```
#### Parametriazedconstructor

```cpp

#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    // Parameterized constructor
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor called: Name = " << name << ", Age = " << age << endl;
    }
};

int main() {
    // Creating an object using parameterized constructor
    Person p1("John", 25);
    Person p2("Alice", 30);

    return 0;
}


```

#### copy Constructor 

```cpp
#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    // Parameterized constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Copy constructor
    Person(const Person &p) {
        name = p.name;
        age = p.age;
        cout << "Copy constructor called: Name = " << name << ", Age = " << age << endl;
    }
};

int main() {
    Person p1("John", 25);  // Calls parameterized constructor
    Person p2 = p1;          // Calls copy constructor

    return 0;
}


```


#### constructor Initalization

used to initailize the data at the creation time itself

```cpp

#include<iostream>
using namespace std;

class Person {
public:
    string name;
    int age ;

    // constructor initailiazation
    Person(string n,int a): name(n),age(a){
        cout << "constructor called name "<< name << endl;
    }
};

int main(){
    Person p1("boss",20);
    return 0;
}
```

#### Destructor 

1. create and delete after task completed

```cpp
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


```


#### constructor overloading

1. this is a type of polymorphism
2. where there will be multiple constructor with different parameters and non parameters 
3. constructor will get selected on the time of initaioezation of the object

```cpp
#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    // Default constructor
    Rectangle() {
        width = 1;
        height = 1;
        cout << "Default Constructor called. Width: " << width << ", Height: " << height << endl;
    }

    // Constructor with one parameter (square)
    Rectangle(int side) {
        // u can also use the pointer
        this->width = side;
        // or this
        height = side;
        cout << "Single Parameter Constructor called. Width: " << width << ", Height: " << height << endl;
    }

    // Constructor with two parameters
    Rectangle(int w, int h) {
        width = w;
        height = h;
        cout << "Two Parameter Constructor called. Width: " << width << ", Height: " << height << endl;
    }

    // Method to calculate area
    // 1. using the const will not allow function to chage the value and more safer
    int area() const {
        return width * height;
    }
};

int main() {
    // Using default constructor
    Rectangle rect1;
    cout << "Area of rect1: " << rect1.area() << endl << endl;

    // Using constructor with one parameter (square)
    Rectangle rect2(5);
    cout << "Area of rect2: " << rect2.area() << endl << endl;

    // Using constructor with two parameters
    Rectangle rect3(4, 6);
    cout << "Area of rect3: " << rect3.area() << endl;

    return 0;
}


```

#### copy Constructor 

on the complie time memory allocation will be done using the stack

but on run tain the memory will be stored in the HEAP eg: using new keyword `int new[5]`

in this we cannot use the shallow copy constructor


1. shallow copy constructor
 copy of value from one to another
2. Deep copy constructor

```cpp
#include <iostream>
using namespace std;

class Example {
    int value;

public:
    // Parameterized constructor
    Example(int v) : value(v) {}

    // Copy constructor
    Example( Example &obj) {
        value = obj.value;
        cout << "Copy constructor called!" << endl;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    Example obj1(42);       // Calls the parameterized constructor
    Example obj2 = obj1;    // Calls the copy constructor

    cout << "obj1 value: " << obj1.getValue() << endl;
    cout << "obj2 value: " << obj2.getValue() << endl;

    return 0;
}


```


