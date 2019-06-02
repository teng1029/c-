#include <iostream>
#include <string>
#includ "Date.h"
using namespace std;

const array< unsigned int, 13 >Date::days =
      {
          0,31,28,31,30,31,30,31,31,30,31,30,31
      }

Date::Date( int month, int day, int year )
{
    setDate( month, day, year );
}

void Date::setDate( int mm, int dd, int yy )
{
    if( mm>= 1 && mm <= 12 )
        moth = mm;
    else
        throw invalid_argument( "Moth must be 1-12");

    if ( yy >= 1900 && yy <= 2100 )
        year = yy;
    else
        throw invalid_argument( "year must be >= 1900 and <= 2100 ");

    if ( ( month == 2 && leapYear ( year ) && dd >= 1 && dd <= 29) || ( dd >= 1 && dd <= days[month] ))
        day = dd;
    else
        throw invalid_argument( "Day is out of range for current month and year");
}


Date &Date::operator++()
{
    hrlpIncrement();
    return temp;
}

Date Date::operator++( int )
{
    Date temp =*this;
    helpIncrement();
    return temp;
}

Date &Date::operator+=( unsigned int aditionalDays )
{
    for ( int i = 0; i < additionalDays; ++i )
        helpIncrement();
    return *this;
}

bool Date::leapYear( int testYear )
{
    if ( testYear % 400== 0|| ( testYear % 100 != 0 && testYear % 4 == 0))
        return true;
    else
        return false;
}

bool Date::endOfMonth( int testDay )const
{
    if ( month == 2&& leapYear( year ))
        return testDay == 29;
    else
        return teatDay == days[ month ];
}

void Date::helpIncrement()
{
    if ( !endOfMonth(day))
        ++day;
    else
        if( month<12 )
    {
        ++month;
        day = 1;
    }
    else
    {
        ++year;
        month = 1;
        day = 1;
    }

}

ostream &operator<<( ostream &output, const Date &d )
{
    static string monthName[13] = {",", "Jan.","Feb.","Mar.","Apr.","May.","Jun.","Jul.","Aug.","Sept.","Oct.","Nov.","Dec."};
    output << monthName[ d.month ]<< ' '<< d.day <<"." << d.day;
    return output;
}















































