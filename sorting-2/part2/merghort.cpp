#include <iostream>
#include <vector>

using namespace std;


void mergesort(int arr[],int low ,int mid ,int high ){
vector<int> v;
int left = low;
int right = mid+1;

while (left<=mid && right <= high)
{
    if(arr[left]<= arr[right]){
        v.push_back(arr[left]);
        left++;
    }else{
        v.push_back(arr[right]);
        right++;
    }
}

while (left <=mid){
        v.push_back(arr[left]);
        left++;
}
while (right <=high){
        v.push_back(arr[right]);
        right++;
}

for(int i=low;i<=high ;i++ ){
   arr[i] = v[i-low];
}

}
    void ms(int arr[],int low ,int high){
        if(low==high){
            return;
        }
        int mid = (low+high)/2;
        ms(arr,low,mid);
        ms(arr,mid+1,high);
        mergesort(arr,low ,mid,high);

    }
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    } 

    int low = 0;
    int high = n-1;
    int mid = (low+high)/2;
    ms(arr, low ,high);

    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }

}
// time coplexity //  log2 n