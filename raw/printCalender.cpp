#include <bits/stdc++.h>
using namespace std;

// Function to check if the year is a leap year
bool isLeap(int year){
  return ((year%4==0 && year%100!=0) || year%400==0);
}

// Function to return the number of days in a month
int numberOfDay(int month, int year){
  if(month == 2){ // February
    return isLeap(year) ? 29 : 28;
  }else if(month == 4 || month == 9 || month == 6 || month == 11){ // Months with 30 days
    return 30;
  }else { // Months with 31 days
    return 31;
  }
}

// Function to calculate the starting day of the month using Zeller's congruence
int startingDay(int year, int month){
  int d = 1; // Start with the first day of the month
  int y = year;
  int m = (month < 3) ? (month + 12) : month; // Adjust for Jan/Feb
  if(month < 3) y -= 1;

  int k = y % 100;
  int j = y / 100;
  int day = (d + (13 * (m + 1)) / 5 + k + (k / 4) + (j / 4) + 5 * j) % 7;
  return (day + 6) % 7; // Adjust to make 0=Sunday, 6=Saturday
}

int main(){
  int month, year;
  cout << "Enter the month(1-12): ";
  cin >> month;
  cout << "Enter the year: ";
  cin >> year;

  // Input validation
  if (month < 1 || month > 12 || year < 1) {
    cout << "Invalid input. Please enter a valid month (1-12) and year (>0).\n";
    return 1;
  }

  // Array of month names
  const string months[] = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
  };
  
  // Printing the calendar header
  cout << "     " << months[month - 1] << " " << year << endl;
  cout << "Sun Mon Tue Wed Thu Fri Sat" << endl;

  // Calculate starting day and number of days in the month
  int start = startingDay(year, month);
  int noDay = numberOfDay(month, year);

  // Print leading spaces for the first row
  for(int i = 0; i < start; i++) {
    cout << "    ";
  }

  // Print the days of the month
  for(int i = 1; i <= noDay; i++) {
    printf("%3d ", i); // Print each day with proper spacing
    if((start + i) % 7 == 0) { // After Saturday, move to the next line
      cout << endl;
    }
  }

  cout << endl;
  return 0;
}

