#include "BnClock.h" 
BnClock::BnClock(const int h, const int m, const int s) 
{ 
 hours = h % 24; 
 minutes = m % 60; 
 seconds = s % 60; 
} 
BnClock::~BnClock() {} 
long BnClock::toLong() const 
{ 
 return seconds + minutes * 60 + hours * 3600; 
} 
string BnClock::toString() const 
{ 
 ostringstream sout; 
 
 write(sout); 
 
 return sout.str(); 
} void BnClock::increment() 
{ 
 if (++seconds == 60) 
 { 
 seconds = 0; 
 if (++minutes == 60) 
 { 
 minutes = 0; 
 if (++hours == 24) 
 { 
 hours = 0; 
 } 
 } 
 } 
} 
void BnClock::read(istream & is) 
{ 
 is >> hours; 
 is.ignore(); 
 is >> minutes; 
 is.ignore(); 
 is >> seconds; 
 is.ignore(); 
 hours = hours % 24; 
 minutes = minutes % 60; 
 seconds = seconds % 60; 
} 
void BnClock::write(ostream & os) const 
{ 
 os <<endl <<((hours < 10) ? " " : "") << hours; 
 os << ":"; 
 os << ((minutes < 10) ? "0" : "") << minutes; 
 os << ":"; 
 os << ((seconds < 10) ? "0" : "") << seconds<<endl; 
} 