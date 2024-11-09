#include<iostream>
using namespace std;

class BankAccount{
private:
  double balance;
public:
  string name;
  BankAccount(double initalBalance){
    name = "empty";
    if(initalBalance>=0){
      balance = initalBalance;
    }else{
      balance = 0;
    }
  }

  // getter function
  double getBal(){
    return balance;
  }

  //setter function
  void deposit(double amt){
    if(amt>0){
      balance += amt;
    }else{
      cout << "Amount cannot be Zero"<< endl;
    }
  }

  // function to withdraw money
  void withdraw(double amt){
    if(amt>0 && amt <= balance){
      balance -=amt;
    }else{
      cout << "Invalid Request"<< endl;
    }
  }
};


int main(){
  BankAccount acc(1000000);

  cout << "Inital Balance" << acc.getBal()<< endl;

  acc.deposit(10000);
  cout << "Balance id "<< acc.getBal()<< endl;

  acc.withdraw(10);
  cout << "Balance id "<< acc.getBal()<< endl;
  cout << acc.name<< endl; 
  acc.withdraw(1000000000);
  return 0;
}


