#pragma once 
#include <iostream> 
#include <string> 
#include <sstream> 
using namespace std; 
class BnChronos 
{ 
public: 
 BnChronos(); 
 virtual ~BnChronos();
 // Arithmetic operators 
 long operator-(const BnChronos & obj) const; 
 BnChronos & operator+=(const int k); 
 // Relational operators 
 friend bool operator <(const BnChronos & a, const BnChronos & b); 
 friend bool operator >(const BnChronos & a, const BnChronos & b); 
 friend bool operator <=(const BnChronos & a, const BnChronos & b); 
 friend bool operator >=(const BnChronos & a, const BnChronos & b); 
 friend bool operator ==(const BnChronos & a, const BnChronos & b); 
 friend bool operator !=(const BnChronos & a, const BnChronos & b); 
 // Input and Output operators 
 friend istream & operator >>(istream & in, BnChronos & obj); 
 friend ostream & operator <<(ostream & out, const BnChronos & obj); 
 // Pure virtual methods 
 virtual long toLong() const = 0; 
 virtual string toString() const = 0; 
 virtual void increment() = 0; 
 virtual void read(istream & is) = 0; 
 virtual void write(ostream & os) const = 0; 
}; 