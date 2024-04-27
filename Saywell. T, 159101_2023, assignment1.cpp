#include <iostream>
using namespace std;
//Taylor Saywell - Applied Programming Assignment 1 - ID23015257

int diff, day, month, year;

int main() {
   cout << "Enter the difference in days: ";
   cin >> diff;

   cout << "Enter a date in the form day month year: ";
   cin >> day >> month >> year;

    if ((diff >= -7) && (diff <= 7)) {
        day = day + diff;

    if (month == 2) {         //leapyear calculation + Feb
     if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
      if (day > 29) {
           day = day - 29;
            month = month + 1;
            } else if (day < 1) {
                day = day + 29;
                month = month - 1;
            }
         } else {
            if (day > 28) {
                day = day - 28;
                month = month + 1;
            } else if (day < 1) {
                day = day + 31;   //31 days in Jan
                month = month - 1;
            }
            }
        } else if ((month == 4) || (month == 6) || (month == 9) || (month == 11)) {
            if (day > 30) {
                day = day - 30;
                month = month + 1;
            } else if (day < 1) {
                day = day + 31;
                month = month - 1; 
                } 
        } else if ((month == 5) || (month == 7) || (month == 10)) {
            if (day > 31) {
                day = day - 31;
                month = month + 1; 
            } else {
               if (day < 1) {
                day = day + 30;
                month = month - 1;
               }
             } 
             } else if ((month == 1) || (month == 8)) {
                if (day > 31) {
                    day = day - 31;
                    month = month + 1;
                } else {
                    if (day < 1) {
                        day = day + 31;
                        month = month - 1;
                    }
                }
             } else if (month == 3) {
                if (day > 31) {
                    day = day - 31;
                    month = month + 1;
                } else if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
                     if (day < 1) {
                        day = day + 29;
                        month = month - 1; }
                    } else {
                        if (day < 1) {
                            day = day + 28;
                            month = month - 1;
                    }
                }
             } else if (month == 12) {
                if (day > 31) {
                    day = day - 31;
                    month = month + 1;
                } else {
                    if (day < 1) {
                        day = day + 30;
                        month = month - 1;
                    }
                }
             }
             if (month > 12) {
                month = 1;
                year = year + 1;
         } else {
            if (month < 1) {
                month = 12;
                year = year - 1;
            }
         }
        
        } cout << "The final date is: " << day << "/" << month << "/" << year << endl;
    }
//Completed 18/03/2023 @ 12pm
