
//
// This is example code from Chapter 9.8 "The Date class" of 
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "Chrono.h"

namespace Chrono {

// member function definitions:

//------------------------------------------------------------------------------

Date::Date(int yy, Month mm, int dd)
    : y(yy), m(mm), d(dd)
{
    if (!is_date(yy,mm,dd)) throw Invalid();
}

//------------------------------------------------------------------------------

const Date& default_date()
{
    static const Date dd(2001,Date::jan,1); // start of 21st century
    return dd;
}

//------------------------------------------------------------------------------

Date::Date()
    :y(default_date().year()),
     m(default_date().month()),
     d(default_date().day())
{
}

//------------------------------------------------------------------------------

void Date:: add_day(int n)
{
    // ...
}

//------------------------------------------------------------------------------

void Date::add_month(int n)
{
    // ...
}

//------------------------------------------------------------------------------

void Date::add_year(int n)
{
    if (m==feb && d==29 && !leapyear(y+n)) { // beware of leap years!
        m = mar;        // use March 1 instead of February 29
        d = 1;
    }
    y+=n;
}

//------------------------------------------------------------------------------

// helper functions:

bool is_date(int y, Date::Month  m, int d)
{
    // assume that y is valid

    if (d<=0) return false;            // d must be positive

    int days_in_month = 31;            // most months have 31 days

    switch (m) {
case Date::feb:                        // the length of February varies
    days_in_month = (leapyear(y))?29:28;
    break;
case Date::apr: case Date::jun: case Date::sep: case Date::nov:
    days_in_month = 30;                // the rest have 30 days
    break;
    }

    if (days_in_month<d) return false;

    return true;
} 

//------------------------------------------------------------------------------

bool leapyear(int y)
{
    // See exercise ???
    if (y%400==0) return true;
	else if (y%100==0) return false;
	else if (y%4==0) return true;
	else return false;
}

//------------------------------------------------------------------------------

bool operator==(const Date& a, const Date& b)
{
    return a.year()==b.year()
        && a.month()==b.month()
        && a.day()==b.day();
}

//------------------------------------------------------------------------------

bool operator!=(const Date& a, const Date& b)
{
    return !(a==b);
}

//------------------------------------------------------------------------------

ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.year()
              << ',' << d.month()
              << ',' << d.day() 
              << ')';
}

//------------------------------------------------------------------------------

istream& operator>>(istream& is, Date& dd)
{
    int y, m, d;
    char ch1, ch2, ch3, ch4;
    is >> ch1 >> y >> ch2 >> m >> ch3 >> d >> ch4;
    if (!is) return is;
    if (ch1!='(' || ch2!=',' || ch3!=',' || ch4!=')') { // oops: format error
        is.clear(ios_base::failbit);                    // set the fail bit
        return is;
    }
    dd = Date(y,Date::Month(m),d);     // update dd
    return is;
}

//------------------------------------------------------------------------------



//------------------------------------------------------------------------------

Date::Day Date::day_of_week(const Date& d)
{
    // Declare variables for day, month, and year
	int q = d.day();
	int month = (int)d.month();
	int k = d.year()%100;
	int j = d.year()/100;
	int h;
	
	//January and February counted as '13' and '14' of previous year
	if(month == 1)
  {
    month = 13;
    k--;
  }
	if (month == 2)
  {
    month = 14;
    k--;
  }
	
	//Zeller's Congruence
	h = q + 13*(month+1)/5 + k + k/4 + j/4 + 5*j;
	h = h % 7;
	
	//Check cases of h and return value for day_of_week
	switch(h){
		case 0:
			//..
			return Date::Day::saturday;
			break;
		case 1:
			return Date::Day::sunday;
			break;
		case 2:
			return Date::Day::monday;
			break;
		case 3:
			return Date::Day::tuesday;
			break;
		case 4:
			return Date::Day::wednesday;
			break;
		case 5:
			return Date::Day::thursday;
			break;
		case 6:
			return Date::Day::friday;
			break;
		default :
			//something happened
			cerr<<"error: something happened\n";
	}
	
    //return sunday;
}

//------------------------------------------------------------------------------

Date next_Sunday(const Date& d)
{
    // ...
    return d;
}

//------------------------------------------------------------------------------

Date next_weekday(const Date& d)
{
    // ...
    return d;
}

//------------------------------------------------------------------------------

} // Chrono

//------------------------------------------------------------------------------


//------------------------------------------------------------------------------