#include<bits/stdc++.h>
using namespace std;

//int countDigits(int n){
// int ctn = (int)(log10(n)+1);
// cout << ctn;
// return ctn;
//
//int main() {
//   int N = 329823;
//   cout << "N: "<< N << endl;
//   int digits = countDigits(N);
//   cout << "Number of Digits in N: "<< digits << endl;
//   return 0;
//


//int main(){
//  int n=1234;
//  int rev =0;
//  while(n>0){
//    int temp = n%10;
//    rev = rev*10+temp;
//    n/=10;
//  }
//  cout << "revsed number is :" << rev << endl;
//  return 0;
//}


//int main(){
//  int n = 1001;
//  int num = n;
//  int rev=0;
//  while(n>0){
//  int temp = n%10;
//    rev = rev*10 + temp;
//    n/=10;
//  }
//  if(rev ==num){
//    cout << "This is the PALINDROME ";
//  }else{
//    cout << "not palindrome";
//  }
//}

//int Gcd(int a,int b){
//  
//  int res = 0;
//  while(a>0 && b>0){
//   if(a>b){
//      a= a%b;
//    }else{
//      b=b%a;
//    }
//  }
//  if(a==0){
//    return b;
//  }else{
//    return a;
//  }
//}
//
//int Lcm(int a,int b,int res){
//int ans  = (a*b)/res;
//return ans;
//}
//
//int main(){
//  int a,b;
//  cin >> a>>b;
//int res = Gcd(a,b);
//  int lcm = Lcm(a,b,res);
//  cout << "Lcm "<< lcm << " gcd";
//  cout << res;
//}

//
//int main(){
//  int n;
//  cin >> n;
//  int cp = n;
//  int ans =0;
//  while(n>0){
//    int temp = n%10;
//    ans = ans + (temp *temp * temp);
//    n/=10;
//  }
//  if(cp ==ans){
//    cout << "It is armstrong";
//  }else{
//
//    cout << "It is not armstrong";
//  }
//}


//vector<int> findDivisors(int n) {
//    vector<int> divisors; 
//    int sqrtN = sqrt(n); 
//    
//    for (int i = 1; i <= sqrtN; ++i) { 
//        if (n % i == 0) { 
//            divisors.push_back(i); 
//        if (i != n / i) {
//          divisors.push_back(n / i); 
//        
//        }
//    }}
//    
//    return divisors; 
//}
//
//int main() {
//    int number = 12;
//    vector<int> divisors = findDivisors(number);
//
//    cout << "Divisors of " << number << " are: ";
//    for (int divisor : divisors) {
//        cout << divisor << " ";
//    }
//    cout << endl;
//
//    return 0;
//}



