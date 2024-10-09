#include<bits/stdc++.h>
using namespace std;


int main(){
    // check the following condition in the school
    /**
     * a below 25 -f
     * 25-44-e
     * 45-49 -d
     * 50-59-c
     * 60-79-b
     * 80-100 -a
     * 
     */
    int marks ;
    cout << "Enter your marks :";
    cin>> marks;
    if(marks<25){
        cout << "f";
    }else if(marks<=44){
        cout << "e";
    }else if(marks<=49){
        cout << "d";
    }else if(marks<=59){
        cout << "c";
    }else if(marks<=79){
        cout << "b";
    }else if(marks<=100){
        cout << "a";
    }else{
        cout << "enter the valid number";
    }
    cout<< "*************************************\n";

    int age ;
    cout << "enter your age :";
    cin>> age;
    if(age<18){
        cout << "not eligibal fro the job";
    }else if(age >=18 && age<=54){
        cout << "You are elgibal for th job";
    }else if(age>=55 && age <=57){
        cout << "eligibal for the job ,but you will retire soon";
    }else{
        cout << "retirment time";
    } 
  return 0;
}
