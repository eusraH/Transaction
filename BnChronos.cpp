#include "BnChronos.h" 
BnChronos::BnChronos() {} 
BnChronos::~BnChronos() {} 
// Arithmetic operators: difference and increment 
long BnChronos::operator-(const BnChronos & obj) const 
{ 
 return toLong() - obj.toLong(); 
}
BnChronos & BnChronos::operator += (const int k) 
{ 
 for (int i = 0; i < k; i++) 
 increment(); 
 return *this; 
} 
// Relational operators 
bool operator <(const BnChronos & a, const BnChronos & b) 
{ 
 return a.toLong() < b.toLong(); 
} 
bool operator >(const BnChronos & a, const BnChronos & b) 
{ 
 return a.toLong() > b.toLong(); 
} 
bool operator <=(const BnChronos & a, const BnChronos & b) 
{ 
 return a.toLong() <= b.toLong(); 
} 
bool operator >=(const BnChronos & a, const BnChronos & b) 
{ 
 return a.toLong() >= b.toLong(); 
} 
bool operator ==(const BnChronos & a, const BnChronos & b) 
{ 
 return a.toLong() == b.toLong(); 
} 
bool operator !=(const BnChronos & a, const BnChronos & b) 
{ 
 return a.toLong() != b.toLong(); 
} 
// Input and Output operators 
istream & operator >>(istream & in, BnChronos & obj)
{ 
 obj.read(in); 
 return in; 
} 
ostream & operator <<(ostream & out, const BnChronos & obj) 
{ 
 obj.write(out); 
 return out; 
}