#include <iostream>
using namespace std;

void counterFunction() {
    static int count = 0;  // This variable is static, so it retains its value between calls
    count++;
    cout << "Function called " << count << " times" << endl;
}

int main() {
    counterFunction();
    counterFunction();
    counterFunction();
    return 0;
}

///////////////////////////////////////////////////////////


// for the classess


#include <iostream>
using namespace std;

class Student {
private:
    static int studentCount;  // Static member variable, shared among all objects
public:
    Student() {
        studentCount++;
    }

    ~Student() {
        studentCount--;
    }

    static int getStudentCount() {  // Static member function to access static variable
        return studentCount;
    }
};

// Initialize static member variable outside the class
int Student::studentCount = 0;

int main() {
    cout << "Initial student count: " << Student::getStudentCount() << endl;

    Student s1, s2;
    cout << "Student count after creating two students: " << Student::getStudentCount() << endl;

    {
        Student s3;
        cout << "Student count after creating another student: " << Student::getStudentCount() << endl;
    }  // s3 goes out of scope here

    cout << "Student count after one student goes out of scope: " << Student::getStudentCount() << endl;

    return 0;
}

