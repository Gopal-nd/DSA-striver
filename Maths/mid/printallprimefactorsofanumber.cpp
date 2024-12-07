
bool prime(int n){
int c=0;
  for(int i=1;i*i<=n;i++){
    if(n%i==0){
      c++;
      if((n/i)!=i) c++;
    }
  }
  return c==2?true:false;
}


int main(){
vector<int> ans;
  int n;
  cin >>n;
  for(int i=1;i*i<=n;i++){
    if(n%i==0){
      if(prime(i)) ans.push_back(i);
      if(n/i!=i){

      if(prime(i)) ans.push_back(i);
    
    }
  }

  return 0;
}
