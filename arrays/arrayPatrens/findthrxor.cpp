

int findxor(int n){
  for(int i=1;i<=n;i++){
    if(i%4==1) return 1;
    else if (i%4==2) return i+1;
    else if (i%4==3) return 0;
    else return i;
  }
}
