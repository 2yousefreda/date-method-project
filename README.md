# date-methods-project

## Overview

The **ClsDate** class is a powerful date manipulation library implemented in C++. It allows you to easily work with dates, perform calculations, and format them in various ways. The class includes comprehensive features to handle leap years, weekends, business days, and more.

## Features

### 1. **Date Initialization**
   - **System Date Initialization**: Automatically initializes the date object to the current system date.
   - **Custom Date Initialization**: Initialize the date with a specific day, month, and year.
   - **String Date Initialization**: Parse a date from a string in the format `DD/MM/YYYY`.

### 2. **Date Formatting**
   - **DateToString()**: Converts a date to a string in the `DD/MM/YYYY` format.
   - **DateToString(ClsDate)**: A static method to convert any `ClsDate` object into a formatted string.

### 3. **Leap Year Support**
   - **isLeapYear()**: Checks if the current year is a leap year.
   - **isLeapYear(int year)**: Static method to check if a given year is a leap year.

### 4. **Day and Month Calculations**
   - **numberOfDaysInMonth()**: Returns the number of days in the current month.
   - **numberOfDaysInMonth(short month, short year)**: Static method to return the number of days in a given month and year.
   - **DayOfWeekOrder()**: Returns the day of the week as an integer (0 for Sunday, 6 for Saturday).
   - **dayName()**: Returns the name of the day (e.g., "Monday").
   - **isLastDayInMonth()**: Checks if the current date is the last day of the month.
   - **isLastMonthInYear()**: Checks if the current month is the last month of the year (December).

### 5. **Weekend and Business Day Checking**
   - **isWeekEnd()**: Checks if the current date is a weekend (Friday or Saturday).
   - **IsBusinessDay()**: Checks if the current date is a business day (not a weekend).
   - **isWeekEnd(ClsDate)**: Static method to check if a specific date falls on a weekend.
   - **IsBusinessDay(ClsDate)**: Static method to check if a specific date is a business day.

### 6. **Date Comparison**
   - **IsDate1BeforeDate2(ClsDate Date1, ClsDate Date2)**: Static method to check if Date1 is before Date2.
   - **IsDate1AfterDate2(ClsDate Date1, ClsDate Date2)**: Static method to check if Date1 is after Date2.

### 7. **Date Arithmetic**
   - **AddOneDay()**: Adds one day to the current date.
   - **Add_X_Day(short xDays)**: Adds a specified number of days to the current date.
   - **IncreaseDateByOneWeek()**: Adds one week to the current date.
   - **IncreaseDateBy_X_Week(short xWeeks)**: Adds a specified number of weeks to the current date.
   - **IncreaseDateByOneMonth()**: Adds one month to the current date.
   - **IncreaseDateBy_X_Month(short xMonths)**: Adds a specified number of months to the current date.
   - **IncreaseDateByOneYear()**: Adds one year to the current date.
   - **IncreaseDateBy_X_Year(short xYears)**: Adds a specified number of years to the current date.

### 8. **Date Difference**
   - **calcDaysBetween2Dates(ClsDate Date1, ClsDate Date2)**: Static method to calculate the number of days between two dates.

### 9. **Age Calculation**
   - **Age(ClsDate BirthDate)**: Static method to calculate the age based on a birth date.

### 10. **Days Remaining**
   - **DaysUntillEndOfWeek()**: Returns the number of days left until the end of the week.
   - **DaysUntillEndOfMonth()**: Returns the number of days left until the end of the month.
   - **DaysUntillEndOfYear()**: Returns the number of days left until the end of the year.

### 11. **Utility Functions**
   - **swapDate(ClsDate& date1, ClsDate& date2)**: Static method to swap two dates.
   - **NumberOfDayFromBegainingTheYear()**: Returns the number of days from the start of the year to the current date.

## How to Use

To use the **ClsDate** class, simply include it in your project and start creating date objects. You can manipulate dates, calculate differences, and format them easily.

Example:

```cpp
#include "ClsDate.h"

int main() {
    ClsDate date1(15, 11, 2024);  // Create a date for November 15, 2024
    date1.AddOneDay();            // Add one day to the date
    date1.print();                // Print the updated date

    ClsDate date2("10/12/2022");  // Create a date from string
    bool isWeekend = date2.isWeekEnd();  // Check if the date is a weekend
    cout << "Is Weekend: " << isWeekend << endl;

    int daysBetween = ClsDate::calcDaysBetween2Dates(date1, date2);  // Calculate days between two dates
    cout << "Days Between: " << daysBetween << endl;

    return 0;
}
