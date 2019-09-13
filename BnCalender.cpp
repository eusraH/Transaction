
#include "BnCalender.h" 

BnCalender::BnCalender(const int y, const int m, const int d) 
{ 
 year = (y > 1000)? y : 1000; 
 month = (m > 0 && m <= 12)? m : 1; 
 day = (d > 0 && d <= getMonthSize()) ? d : 1; 
} 
BnCalender::~BnCalender() {} 
long BnCalender::toLong() const 
{ 
 return day + month * 100 + year * 10000; 
} 
string BnCalender::toString() const 
{ 
 ostringstream sout; 
 write(sout); 
 return sout.str(); 
}
void BnCalender::increment() 
{ 
 if (++day > getMonthSize()) 
 { 
 day = 1; 
 if (++month > 12) 
 { 
 month = 1; 
 ++year; 
 } 
 } 
} 
void BnCalender::read(istream & is) 
{ 
 is >> year; 
 is.ignore(); 
 is >> month; 
 is.ignore(); 
 is >> day; 
 is.ignore(); 
 year = (year > 1000) ? year : 1000; 
 month = (month > 0 && month <= 12) ? month : 1; 
 day = (day > 0 && day <= getMonthSize()) ? day : 1; 
} 
void BnCalender::write(ostream & os) const 
{ 
 os <<endl<< year; 
 os << "/"; 
 os << ((month < 10) ? "0" : "") << month; 
 os << "/"; 
 os << ((day < 10) ? "0" : "") << day<<endl; 
} 

int BnCalender::getMonthSize() const 
{ 
 int max_number_of_days; 
 switch (month) 
 { 
 case 1: // Jan 
 case 3: // Mar 
 case 5: // May 
 case 7: // July 
 case 8: // Aug 
 case 10: // Oct 
 case 12: // Dec 
 max_number_of_days = 31; 
 break;
 case 4: // Apr 
 case 6: // June 
 case 9: // Sept 
 case 11: // Nov 
 max_number_of_days = 30; 
 break; 

 case 2: // February 

 if (year % 4 != 0) // it is a common year 
 { 
 max_number_of_days = 28; 
 } 
 else if (year % 100 != 0) // it is a leap year 
 { 
 max_number_of_days = 29; 
 } 
 else if (year % 400 != 0) // it is a common year 
 { 
 max_number_of_days = 28; 
 } 
 else // it is a leap year 
 { 
 max_number_of_days = 29; 
 } 
 
 } 
 return max_number_of_days; 
}