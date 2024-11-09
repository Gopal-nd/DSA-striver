#include<bits/stdc++.h>
using namespace std;
// classes amd objects in cpp thsis is an example of the class{
class Car {
public:
  string color;
  int speed;

  void acceleratee(){
  speed+=10;
  }
};

// encapsulation example
class Ecar {
private:
    int speed;
public:
  void setspeed(int s ){
//    if(s>=0) speed=s;
  }
  int getspeed(){
    return speed;
  }
};


//inheritence
//(advanteges it can run the hierachy code ,it can run the parent code also)
class vehical{
public:
  void start(){cout << "vehical strted";}
};
class car: public vehical{
public:
  void honk(){cout <<"car horn sounded";}
};


// it will change base on the input style
// polymorphisam
//
// 1. compile-time polymorphisam
class Print{
public:
  void show(int i){cout << "Integer is: "<< i<<endl;}
  void show(double d){cout << "Double value is "<<d<<endl;}
};
// 2. runtime polymorphisam

class Animal{
public :
  virtual void sound(){cout << "this is animal"<<endl;}

};

class sheep: public Animal{
public:
  void sound() override {cout << "This is the sheep"<< endl;}
};

// abstaction 

class Shape {
public: 
  virtual void draw() =0;

};

class Circle :public Shape{
public: 
  void draw() override {cout << "Drawing the cirle" << endl;}
};



int main(){
 Car mycar;   // this is the intialization of the object which uses the classs mentiond above
  mycar.color = "red";
  mycar.speed = 20;
  mycar.acceleratee();
  cout << mycar.speed;
  // encapsulation 
  Ecar ecar;
  ecar.setspeed(10);
  int speed = ecar.getspeed();
  cout << speed;

  // inheritence
  car letcar;
  letcar.start();
  letcar.honk();
 
  // polymorphisam
  // 1. compile time 
  Print pnt;
    pnt.show(2);
  double d = 6276823;
    pnt.show(d);
  //2. runtime
  sheep she;
  she.sound();

  // abstraction example
  Circle c;
  c.draw();

  //to use the new keyword
  //steps to follow to use new key word 
  //1. give the poinetr what to use 
  //2. use new and class namespace 
  //3. name-> function();
  
    
  
  
  Circle* cir = new Circle();
  cir->draw();
  return 0;
}
