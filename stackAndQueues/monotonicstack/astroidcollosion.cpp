#include<bits/stdc++.h>
using namespace std;

vector<int> asteroidCollision(vector<int> &asteroid){
  vector<int> st;
  for (int a :asteroid) {
    bool flag = false;
    while (!st.empty() && st.back()>0 && a < 0) {
      int top = st.back();

      if (abs(top) == abs(a)) {
        st.pop_back();
        flag = true;
        break;

      }else if (abs(top)> abs(a)) {
       flag = true;
        break;
      }else {
        st.pop_back();
      }
    }
    if(!flag){
      st.push_back(a);
    }
  }
  return st;
}

int main() {
    vector<int> asteroids = {5, 10, -5};
    vector<int> result = asteroidCollision(asteroids);

    cout << "Remaining asteroids: ";
    for (int asteroid : result) {
        cout << asteroid << " ";
    }
    cout << endl;

    return 0;
}
