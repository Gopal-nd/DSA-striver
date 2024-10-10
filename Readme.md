## Dsa in C++

### Basic to know before starting

#### how set up the workspace and makesure everything is uptodatae

` g++ --version ` to check the version and sussessfull installation of the compiler

`cd workingFolder ` before u run the program

`g++ filename.cpp` to compile the program

it will provide **a.exe** file to execute 

`./a.exe` to run the program

---
### simple input and output example

```cpp
#include <iostream>
using namespace std;

int main(){
    int a;
    cin >>a;
    cout <<"a value is "<< a << endl;
    return 0;
}
```
---

### external resourse of programming

##### email: **docode999**

[TakeYouForward](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2/)

[Leetcode](https://leetcode.com/u/QZWebfpcYO/)

[Github](https://github.com/gopal-nd)

[code360-codingninja](https://www.naukri.com/code360/home)

---
### key thing to remember

#### notes for the conceptual concepts
1. dry run the problems in detail
2. solve hard problems with dry run
3. write key notes 

#### Problem solving 
1. approuch 
2. corner cases
3. upload code


#### Indexing the solutions with page numbers
---

### cpp vs code snippet set up

`settings -> snippets -> cpp.json`

```json

"Basic cpp started code": {
    "prefix": "cpp",
    "body": [
        "#include <bits/stdc++.h>",
        "using namespace std;",
        "",
        "int main() {",
        "\t$0", 
        "",
        "  return 0;",
        "}",
        ""
    ],
    "description": "basic cpp starter code"
}


```
type ***cpp*** to run this code 

---
