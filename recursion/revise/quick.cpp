#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &arr, int low, int high){
   int pivot = arr[low];
   int i = low;
   int j = high;
   while (i<j)
   {
    while (arr[i]<=pivot && i <=high-1)
    {
        i++;
    }
    while (arr[j]>pivot && j>=low-1)
    {
        j--;
    }
    if(i<j) swap(arr[i],arr[j]);
    
    
   }
   swap(arr[low],arr[j]);
   return j;
}

void qs(vector<int> &arr,int low,int high){
    if(low<high){
        int p = partition(arr,low,high);
        qs(arr,low,p-1);
        qs(arr,p+1,high);
    }
}
int main(){
    vector<int> arr = {3,4,56,7};
    qs(arr,0,arr.size()-1);
    for(auto i:arr) cout << i << " ";

    return 0;
}
