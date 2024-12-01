// A subsequence is a sequence derived from an array by deleting zero or more elements without changing the order of the remaining elements.
//

//Example: For array [1, 2, 3], subsequences include [1], [2], [1, 2], [1, 3], [2, 3], [1, 2, 3], and [].
//

#include<iostream>
#include<vector>
using namespace std;


void printSubseq(vector<int> &arr,vector<int> &sub,int index,vector<vector<int>> &res){
  if(index == arr.size()){
    res.push_back(sub);
    return;
  }
  sub.push_back(arr[index]);
  printSubseq(arr,sub,index+1,res);
  sub.pop_back();
  printSubseq(arr,sub,index+1,res);
}


bool printSubseqBool(vector<int> &arr,vector<int> &sub,int s,int sum,int index){
  if(index == arr.size()){
  if(sum==s){
      for(auto i:sub) cout << i<< " ";
      return true;
    }else {
      return false;
    } 
  }
  sub.push_back(arr[index]);
  s+=arr[index];
 if( printSubseqBool(arr,sub,s,sum,index+1)==true){
    return true;
  }
  s-=arr[index];
  sub.pop_back();
  if(printSubseqBool(arr,sub,s,sum,index+1)==true){
    return true;
  }
  return false;
}


int printSubseqint(vector<int> &arr,vector<int> &sub,int s,int sum,int index){
  if(index == arr.size()){
  if(sum==s){
      
      return 1;
    }else {
      return 0;
    } 
  }
  sub.push_back(arr[index]);
  s+=arr[index];
 int l =printSubseqint(arr,sub,s,sum,index+1);
  s-=arr[index];
  sub.pop_back();
  int r =printSubseqint(arr,sub,s,sum,index+1);
  return l+r;
}

int main(){

  int n,inp;
  vector<int> arr;
  vector<vector<int>> res;
  cout <<"Enter the number of elemetes to add: ";
  cin >> n;

  for(int i =0;i<n;i++){
    cin >> inp;
    arr.push_back(inp);
  }
  vector<int> subarray;
  int s =0,sum =2;
  printSubseq(arr,subarray,0,res);

 vector<int> sub;
  cout << printSubseqBool(arr,sub,s,sum,0);

  std::cout << endl<<endl<<endl;
sub ={};
cout << printSubseqint(arr,sub,s,sum,0);
 cout << endl; 
  for(int i=0;i<res.size();i++){
    for(int j =0;j<res[i].size();j++){
      cout << res[i][j]<<" ";
    }
    cout << endl;
  }
  return 0;
}

