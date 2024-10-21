
// brute force method
#include<bits/stdc++.h>
using namespace std;

bool linearSearch(vector <int> a,int target){
    for(int i=0;i<a.size();i++){
        if(a[i]==target){
            return true;
        }
    }
    return false;
}

int LongestSuccessiveElement(vector <int> &a){
    int n =a.size();
    int longest =1;
    // picking the element and searching for the consecutive numbers

    for(int i=0;i<n;i++){
        int currentElement= a[i];
        int count = 1;
        // search the consecutive element;

        while(linearSearch(a,currentElement+1)==true){
            currentElement+=1;
            count+=1;

        }
        longest = max(longest,count);
    }
    return longest;
}

int main(){
    vector <int> a={100,200,1,2,3,4};
    int ans = LongestSuccessiveElement(a);
    cout << "The Longest Consecutive Sequence is : "<< ans;
  return 0;

  // time n^2 ,space o(i)
}



// better solution

#include<bits/stdc++.h>
using namespace std;

int LongestSuccessiveElementBetterAproch(vector <int> &a){
    int n = a.size();
    if(n==0) return 0;

    sort(a.begin(),a.end());
    int lastSmaller = INT_MIN;
    int count =0;
    int longest =1;

    for(int i=0;i<n;i++){
        if(arr[i]-1==lastSmaller){
            count +=1;
            lastSmaller=a[i];
        }else if(a[i] != lastSmaller){
            cnt=1;
            lastSmaller=a[i];
        }

        longest = max(longest,count);
    }
    return longest;
}


int main(){
        vector <int> a={100,200,1,2,3,4};
    int ans = LongestSuccessiveElementBetterAproch(a);
    cout << "The Longest Consecutive Sequence is : "<< ans;

  return 0;
  // time complexity = nlogn + o(N)
  //sapce complexity = O(1)
}

// optimal oproch

int longestSuccessiveElementsOptimal(vector <int> &a){
    int n = a.size();
    if(n==0) return 0;

    int longest =1;
    unordered_set<int>st;

    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }
    for (auto it:st){ // it is the value not index
        if(st.find(it-1)==st.end()){   // it is to check not present in the set 
            int count =1;
            int x = it;

            // Check if an element exists: st.find(x) != st.end();
            while(st.find(x+1)!=st.end()){  //it is tocheckif the element is presnt in the set  ***it is searching betwen start to end
                x=x+1;
                count = count+1;
            }
            longest = max=(longest,count);
        }
    }
    return longets;
}

int main()
{
    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = longestSuccessiveElementsOptimal(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}

