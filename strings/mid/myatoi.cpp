class Solution {
public:
    int myAtoi(string s) {

  //  Input: "42"
//Output: 42

//Input: " -42"
//Output: -42

//Input: "4193 with words"
//Output: 4193

//Input: "words and 987"
//Output: 0
    int i=0,n=s.size();
    int ans =0;
    int sign =1;

     //step 1 to calculate the whitespace
    while(i<n&&s[i]==' '){
      i++;
    }

    // step 2 handle optional + or - sign
    while (i<n;&& s[i]=='+'||s[i]=='-') {
      sign = (s[i]=='-')? -1:1;
      i++;
    }

    // step 3 convert  digit to integer 
    while (i<n && isdigit(s[i])) {
      ans = ans * 10 +(s[i]-'0');
      
      // check for the overflow
      if(ans*sign>=INT_MAX) return INT_MAX;
      if(ans*sign<=INT_MIN) return INT_MIN;
      i++;
    }
    return ans * sign;
  }

};

