#include<bits/stdc++.h>
using namespace std;


int main(){
        vector<int> arr = {7,1,5,3,6,4};
        int maxProfit = 0;
        int n = arr.size();
        int minPrice = INT_MAX;

        for(int i=0;i<n;i++){
            minPrice = min(minPrice,arr[i]);
            maxProfit=max(maxProfit,arr[i]-minPrice);
        }

        cout <<maxProfit;

  return 0;
}
