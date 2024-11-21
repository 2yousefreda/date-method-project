
#include <iostream>
#include <string>
#include "ClsString.h"
#include"ClsDate.h"
#pragma warning(disable : 4996)
using namespace std;


int main()
{
    ClsDate date;
    ClsDate date2("1/1/2005");


    cout << date.DayOfWeekOrder() << endl;
    cout << date.dayName() << endl;
    date.AddOneDay();
    date.print();
    date.IsDate1BeforeDate2(date2);
    date.AddOneDay();
    date.print();
    cout << ClsDate::Age(date2);
}
