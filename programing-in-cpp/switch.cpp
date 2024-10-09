#include<bits/stdc++.h>
using namespace std;


int main(){
    int day;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "today is monday";
        break;
    case 2:
        cout << "today is tuesday";
        break;
    case 3:
        cout << "today is wednesday";
        break;
    case 4:
        cout << "today is Thersday";
        break;
    case 5:
        cout << "today is Friday";
        break;
    case 6:
        cout << "today is saturday";
        break;
    case 7:
        cout << "today is sunday";
        break;
    
    default:
        cout << "not valid one";
        break;
    }

  return 0;
}
