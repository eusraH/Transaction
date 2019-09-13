#pragma once 
#include "BnChronos.h" 
class BnCalender : public BnChronos 
{ 
private: 
 int year, month, day; 
public: 
 BnCalender(const int y = 0, const int m = 0, const int d = 0); 
 virtual ~BnCalender(); 
 virtual long toLong() const; 
 virtual string toString() const; 
 virtual void increment(); 
 virtual void read(istream & is); 
 virtual void write(ostream & os) const; 
 int getMonthSize() const; 
};