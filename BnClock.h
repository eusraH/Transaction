#pragma once 
#include "BnChronos.h" 
class BnClock : public BnChronos 
{ 
private: 
 int hours, minutes, seconds; 
public: 
 BnClock(const int h = 0, const int m = 0, const int s = 0); 
 virtual ~BnClock(); 
 virtual long toLong() const; 
 virtual string toString() const; 
 virtual void increment(); 
 virtual void read(istream & is); 
 virtual void write(ostream & os) const; 
}; 