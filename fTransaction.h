#pragma once
#include "BnCalender.h"
#include "BnClock.h"

class fTransaction
{
protected:
	double amount;

public:

	fTransaction(void);
	virtual ~fTransaction(void);

	BnClock  time;
	BnCalender date;
	
	double getAmount(void) const;
	BnClock getTime(void) const;
	BnCalender getDate(void) const;

	void setAmount(const double amt);
	void setDate( const BnCalender & d);
	void setTiome (const BnClock & t);

	virtual void write(ostream & os) =0;
	virtual void read(istream & is) = 0;
	virtual bool positive( );

};

