# date-methods-project


## Overview

The **ClsDate** class is a comprehensive date management system implemented in C++. It provides a wide range of functionalities for manipulating, comparing, and calculating dates. The class can handle leap years, calculate the difference between dates, determine the day of the week, and much more. It is designed to simplify the manipulation of dates while providing extensive functionality for date-related operations.

## Features

- **Date Initialization**:
  - Initialize with the current system date.
  - Initialize with a specific day, month, and year.
  - Parse date strings in the format `DD/MM/YYYY`.

- **Date Operations**:
  - Add days, weeks, months, or years to a date.
  - Calculate the number of days between two dates.
  - Increase a date by a custom number of days, weeks, months, or years.
  
- **Leap Year Support**:
  - Detect leap years.
  - Adjust for leap years when calculating the number of days in February.

- **Business and Weekend Days**:
  - Check if a date falls on a weekend.
  - Determine if a date is a business day.

- **Day of the Week**:
  - Get the day of the week for a given date.
  - Calculate the number of days remaining until the weekend or the end of the month/year.

- **Utility Functions**:
  - Convert a date to string format `DD/MM/YYYY`.
  - Determine if a given date is the last day of the month or year.
  - Calculate a person’s age based on their birthdate.

## How to Use

Simply instantiate the `ClsDate` class and use its methods to perform various date manipulations.
  
Example:

```cpp
ClsDate date1(15, 11, 2024);  // Create a date object for November 15, 2024
date1.AddOneDay();            // Add one day to the date
date1.print();                // Output the updated date

ClsDate date2("10/12/2022");  // Parse date from string
bool isWeekend = date2.isWeekEnd();  // Check if the date falls on a weekend
cout << "Is Weekend: " << isWeekend << endl;

int daysBetween = ClsDate::calcDaysBetween2Dates(date1, date2);  // Calculate days between two dates
cout << "Days Between: " << daysBetween << endl;
