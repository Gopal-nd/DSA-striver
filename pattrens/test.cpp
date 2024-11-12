#include <bits/stdc++.h>
using namespace std;
int main()
{
  int v =1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <=i; j++)
        {
        if(i==0||j==2*i){
        cout << "*";
      }else{
        std::cout << " ";
      }
        }
       
        cout << endl;
    }

    return 0;
}
