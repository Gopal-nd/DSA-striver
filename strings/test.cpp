#include <iostream>
#include <string>
using namespace std;

string timeConversion(string s) {
    // Extract hours, minutes, seconds, and meridian (AM/PM)
    string hours = s.substr(0, 2);
    string minutes = s.substr(3, 2);
    string seconds = s.substr(6, 2);
    string meridian = s.substr(8, 2);

    int hourInt = stoi(hours); // Convert hours to integer

    if (meridian == "AM") {
        // Convert 12 AM to 00 hours
        if (hourInt == 12) {
            hours = "00";
        }
    } else if (meridian == "PM") {
        // Convert PM hours (except 12 PM)
        if (hourInt != 12) {
            hourInt += 12;
            hours = to_string(hourInt);
        }
    }

    // Return formatted time in 24-hour format
    return hours + ":" + minutes + ":" + seconds;
}

int main() {
    string s;
    cin >> s;
    cout << timeConversion(s) << endl;
    return 0;
}

