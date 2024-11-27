#include <bits/stdc++.h>
#include<cstring>
using namespace std;


int main(){

  // barsics of stings

  // array od charesetrs ending with the '\0'

  // basic operation strlen,strcpy , strcam,

// all using the char [] arr of char
  char str1[100] = "Hello";
  char str2[100] = "world";
  char res[20] = "djsh";

  // strlen ,strcpr, strcmp
  cout << res<<endl;
  strcpy(res, str1);// it just except the two arguments 1-> ans 2->what to copy;
  cout << res<<endl;

  cout << str1<< endl;
  strcat(str1, "supersting  is it");
  cout << str1<<endl;
  strcat(str1,str2);
  cout << str1 <<"  "<< str2<<endl;
cout << strcmp("ww","ww")<<endl;

cout << strcmp("usjdvsajjdjaddj","jwefjwww")<<endl;

cout << strlen(str2)<<endl;
char lstr[]= "ieee";

cout << strlen(lstr)<<endl;

  // strchr return the first occurrence of  char
  // strrchr return the last occurence of char

  cout << strchr(lstr,'e')<< endl;
  cout << strrchr(lstr,'e')<<endl;
 // it prints for the first occurenc to last occuresce
  // in the second one it start printing from the last occurence of the target charecter


  // substring search(strstr)

  char st[]= "hello world ,whatsapp!";
  char sub[]= "wo";

  char * pos = strstr(st,sub);  // returns the pointer

  cout << pos << " " <<*pos<<" "<< pos-st<<endl;
//     value stillend   // char      // index
  


  // splitting 

  char str[] = "apple,orange,bannana,grape";
  char* token = strtok(str,",");

  while (token!=NULL) {
   cout << token <<endl;
  token = strtok(NULL,",");
  }

  return 0;
}



// main functions are 
// strlen() 
// strcat() 3 args concatinates sec to first : and third toaa no of the charecters
// strcpy() 3 args copy second one to first : and third to amention the number of char
// and add the '\0' at last of char
// strcmp() 2 args 
// 0 if strings are equal.
//Negative value if str1 < str2.
//Positive value if str1 > str2.
//Find a character in a string.

//strchr(str, c): Returns a pointer to the first occurrence of c.
//strrchr(str, c): Returns a pointer to the last occurrence of c.
// Substring Search (strstr)
  // char *pos = strstr(str, sub);
   // if (pos) {
 //       cout << "Substring found at: " << pos - str << endl;  // return the index;
//
//strtok();
//   char str[] = "apple,orange,banana,grape";
  //  char *token = strtok(str, ","); // Split on ","
    
    //while (token != NULL) {
  //      cout << token << endl;
 //       token = strtok(NULL, ",");
//
//
//

strlen()
strcpy() 3 args , to ,from, numberofchar
strcat() 3 args , to ,from, numberofchar
strcmp() 3 return 0=equal, left>rigth =neg , right<left = pos
strchr() 2 string ,targetchar, strechr()-> from lastoccurence
strstr() 2 str, taretsubstrubf return pointer
strtok() 2 str, ","








