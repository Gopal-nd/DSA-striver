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
#### Polymorphisam 

1. compile time 
    1. constructor overloadding
    2. function overloadding
    3. operator overloadding

eg:
```cpp
#include <iostream>
using namespace std;

class Calculator {
    int a, b;

public:
    // 1. Constructor Overloading
    Calculator() {
        a = 0;
        b = 0;
        cout << "Default constructor called: a = " << a << ", b = " << b << endl;
    }

    Calculator(int x) {
        a = x;
        b = 0;
        cout << "Single-parameter constructor called: a = " << a << ", b = " << b << endl;
    }

    Calculator(int x, int y) {
        a = x;
        b = y;
        cout << "Two-parameter constructor called: a = " << a << ", b = " << b << endl;
    }

    // 2. Function Overloading
    int add() {
        return a + b;
    }

    int add(int x, int y) {
        return x + y;
    }

    double add(double x, double y) {
        return x + y;
    }

    // 3. Operator Overloading
    Calculator operator + (const Calculator& obj) {
        Calculator temp;
        temp.a = this->a + obj.a;
        temp.b = this->b + obj.b;
        return temp;
    }

    void display() const {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {
    // Demonstrating Constructor Overloading
    Calculator calc1;           // Calls default constructor
    Calculator calc2(5);        // Calls single-parameter constructor
    Calculator calc3(10, 20);   // Calls two-parameter constructor

    // Demonstrating Function Overloading
    cout << "\nFunction Overloading Examples:" << endl;
    cout << "calc3.add(): " << calc3.add() << endl;                // Uses add() with no parameters
    cout << "calc3.add(15, 25): " << calc3.add(15, 25) << endl;    // Uses add(int, int)
    cout << "calc3.add(5.5, 3.3): " << calc3.add(5.5, 3.3) << endl; // Uses add(double, double)

    // Demonstrating Operator Overloading
    Calculator calc4 = calc2 + calc3;  // Calls overloaded + operator
    cout << "\nOperator Overloading Result (calc2 + calc3):" << endl;
    calc4.display();

    return 0;
}


```


2. runtime overlaoding
   1. function overloading (used while inheritence andit is dynamic) 
   2. vartial function (they are dynamic in nature)

eg:

```cpp

#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    // Virtual function to be overridden in derived classes
    virtual double area() const {
        cout << "Base Shape area() called" << endl;
        return 0;
    }
};

class Circle : public Shape {
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Overriding area() function for Circle
    double area() const override {
        cout << "Circle area() called" << endl;
        return M_PI * radius * radius;
    }
};

class Rectangle : public Shape {
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    // Overriding area() function for Rectangle
    double area() const override {
        cout << "Rectangle area() called" << endl;
        return length * width;
    }
};

int main() {
    // Create objects of derived classes
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    // Pointers to base class
    Shape* shapePtr;

    // Pointing to Circle
    shapePtr = &circle;
    cout << "Area of Circle: " << shapePtr->area() << endl;

    // Pointing to Rectangle
    shapePtr = &rectangle;
    cout << "Area of Rectangle: " << shapePtr->area() << endl;

    return 0;
}


```


#### Abstraction 


```cpp

#include <iostream>
#include <string>
using namespace std;

// Abstract base class
class Account {
public:
    virtual void deposit(double amount) = 0;  // Pure virtual function
    virtual void withdraw(double amount) = 0; // Pure virtual function
    virtual double getBalance() const = 0;    // Pure virtual function
    virtual ~Account() = default;             // Virtual destructor
};

class SavingsAccount : public Account {
private:
    double balance;
public:
    SavingsAccount() : balance(0.0) {}

    void deposit(double amount) override {
        balance += amount;
    }

    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    double getBalance() const override {
        return balance;
    }
};

int main() {
    Account* myAccount = new SavingsAccount();
    myAccount->deposit(100.0);
    cout << "Balance after deposit: $" << myAccount->getBalance() << endl;

    myAccount->withdraw(50.0);
    cout << "Balance after withdrawal: $" << myAccount->getBalance() << endl;

    delete myAccount;
    return 0;
}


```


#### static 

on declaration of static variable `static int num;` it will be still in menory untill the main function will ends

1. Static Variable in a Function

eg: 

```cpp
#include <iostream>
using namespace std;

void counterFunction() {
    static int count = 0;  // This variable is static, so it retains its value between calls
    count++;
    cout << "Function called " << count << " times" << endl;
}

int main() {
    counterFunction();
    counterFunction();
    counterFunction();
    return 0;
}

//output

Function called 1 times
Function called 2 times
Function called 3 times

```

2. static member in a class
```cpp

#include <iostream>
using namespace std;

class Student {
private:
    static int studentCount;  // Static member variable, shared among all objects
public:
    Student() {
        studentCount++;
    }

    ~Student() {
        studentCount--;
    }

    static int getStudentCount() {  // Static member function to access static variable
        return studentCount;
    }
};

// Initialize static member variable outside the class
int Student::studentCount = 0;

int main() {
    cout << "Initial student count: " << Student::getStudentCount() << endl;

    Student s1, s2;
    cout << "Student count after creating two students: " << Student::getStudentCount() << endl;

    {
        Student s3;
        cout << "Student count after creating another student: " << Student::getStudentCount() << endl;
    }  // s3 goes out of scope here

    cout << "Student count after one student goes out of scope: " << Student::getStudentCount() << endl;

    return 0;
}

//output 

Initial student count: 0
Student count after creating two students: 2
Student count after creating another student: 3
Student count after one student goes out of scope: 2


```

