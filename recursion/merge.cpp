#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &arr, int low,int mid,int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while (left<=mid&&right<=high)
    {
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=0;i<temp.size();i++){
        arr[low+i] = temp[i];
    }
        
}

void ms(vector<int> &arr,int low,int high){
    if(low==high){
        return;
    }
    int mid = (low+high)/2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main(){
    vector<int> arr = {3,4,56,7};
    ms(arr,0,arr.size()-1);
    for(auto i:arr) cout << i << " ";

    return 0;
}