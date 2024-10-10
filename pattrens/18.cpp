#include<bits/stdc++.h>
using namespace std;


// E 
// D E
// C D E
// B C D E
// A B C D E

int main(){
    char ch = 'E';
    for(int i=0;i<5;i++){
        for(char j =ch-i;j<=ch;j++){
            cout << j << " ";
        }
        cout << endl;

    }

  return 0;
}
