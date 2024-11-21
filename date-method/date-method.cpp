
#include <iostream>
#include <string>
#include "ClsString.h"
#include"ClsDate.h"
#pragma warning(disable : 4996)
using namespace std;


int main()
{
    ClsDate date;
    ClsDate date2("1/1/2000");
    ClsDate date3("1/1/2001");
    ClsDate date4;
    ClsDate systemdate;
  


    date.print();
    date.AddOneDay();
    date.print();
    date.Add_X_Day(20);
    date.print();
    cout<< date.Age(date2)<<endl;
    cout << date.calcDaysBetween2Dates(date2, date3)<<endl;
    cout<<date3.DateToString()<<endl;
    cout << date4.Day << endl;
    cout << date4.dayName()<<endl;
    cout << date4.DayOfWeekOrder()<<endl;
    cout << date4.DaysUntillEndOfMonth() << endl;
    cout << date4.DaysUntillEndOfWeek() << endl;
    cout << date4.DaysUntillEndOfYear() << endl;

     systemdate= ClsDate::Getsystemdate();
     systemdate.print();

     date4.print();
     date4.IncreaseDateByOneMonth();
     date4.print();
     date4.IncreaseDateByOneWeek();
     date4.print();
     date4.IncreaseDateByOneYear();
     date4.print();
     date4.IncreaseDateBy_X_Month(10);
     date4.print();
     date4.IncreaseDateBy_X_Week(10);
     date4.print();
     date4.IncreaseDateBy_X_Year(10);
     date4.print();
     date4 = ClsDate::Getsystemdate();
     date4.print();
     cout << date4.IsBusinessDay() << endl;
     cout << date4.IsDate1AfterDate2(date3)<< endl;
     cout << date4.IsDate1BeforeDate2(date3) << endl;
     cout << date4.isLastDayInMonth() << endl;
     cout << date4.isLastMonthInYear() << endl;
     cout << date4.isleepYear() << endl;
     cout << date4.isWeekEnd() << endl;
     cout << date4.NumberOfDayFromBegainingTheYear() << endl;
     cout << date4.numberOfDaysInMonth() << endl;
     date4.swapDate(date3,date4);
     date4.print();//after swap
     date3.print();//after swap


}
