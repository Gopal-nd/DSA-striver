#include<bits/stdc++.h>
using namespace std;

int getLongestSubarry(vector<int>&a,int k){
    int n = a.size();
    int len =0;
    for(int i=0;i<n;i++){
            int s =0;
        for(int j=i;j<n;j++){
            s+=a[j];
            if(s==k)
            len = max(len,j-i+1);
        }
    }
    return len;
}


int getLongestSubarryOptimal(vector<int>&a,int k){
    int n = a.size();

    map<int,int> preSumMap;
    int sum =0;
    int maxLen =0;
    for(int i=0;i<n;i++){
        sum +=a[i];
        if(s==k)
            len = max(len,j-i+1);
        int rem = sum -k;

        if(preSumMap.find(rem)!=preSumMap.end()){
            int len = i - preSumMap[rem];
            maxLen = max(maxLen,len);
        }
         if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
    return maxlen;
}

int main(){
    vector <int> a ={-1,1,1};
    int k =1;
    // int len = getLongestSubarry(a,k);
    int len = getLongestSubarryOptimal(a,k);
    cout << "THE lenght of the longest subarry is: " << len;
  return 0;
}
