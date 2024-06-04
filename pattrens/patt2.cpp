#include <bits/stdc++.h>
using namespace std;

void pat20(int n){
    int space = 2*n-2;
    for(int i=1;i<=2*n-1;i++){
        //star
        int star = i;
        if(i>n) star = 2*n-i;
        for(int j=1;j<=star;j++){
            cout << "*";
        }
        for(int j =1;j<=space;j++){
            cout << " ";
        }
        for(int j=1;j<=star;j++){
            cout << "*";
        }
        cout << endl;
        if(i<n) space -=2;
        else space +=2;
    }
}


void pat22(int n){
  for (int i=0;i<2*n-1;i++){
    for(int j=0;j<2*n-1;j++){
        int top =i;
        int bottom = j;
        int right = (2*n-2)-j;
        int left = (2*n-2)-i;
        cout << (n -min(min(top,bottom),min(left,right)));
    }
    cout << endl;
  }
}

void pat19(int n){
    int space =0;
    int Rspace =8;
for(int i=0;i<n;i++){
    // number 
    for(int j=0;j<n-i;j++){
        cout << "*";
    }
    //space 
    for (int j =0;j<=space;j++){
        cout << " ";

    }
    // number 
    for(int j=0;j<n-i;j++){
        cout << "*";
    }
        space= space+2;
    cout <<endl;
}

for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
        cout << "*";
    }
    //Rspace 
    for (int j =1;j<Rspace;j++){
        cout << " ";

    }
    // number 
    for(int j=1;j<=i;j++){
        cout << "*";
    }
        Rspace= Rspace-2;
    cout <<endl;
}
}




int  main(){
    //functions
    // pat19(4);
    // pat20(5);
    pat22(5);
    return 0;
}