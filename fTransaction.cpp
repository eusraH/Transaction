#include "fTransaction.h"
#include "BnCalender.h"
#include "BnClock.h"

fTransaction::fTransaction(void)
{
}


fTransaction::~fTransaction(void)
{
}
	
	
	double fTransaction:: getAmount() const
	{
	   return amount;
	}
	BnClock fTransaction::getTime(void)const
	{
		return time;
	}
	BnCalender fTransaction::getDate(void) const
	{
		return date;
	}

	void fTransaction::setAmount(const double amt)
	{
         this->amount=amt;
	}
	
	void fTransaction::setDate( const BnCalender & d)
	{
		this->date= d;
	}
	
	void fTransaction::setTiome (const BnClock & t)
	{
		this->time= t;
	}

	 void fTransaction::write(ostream & os)
	 {
		 os<<"Total amount: "<<amount
			 <<"\nDate:  "<<date
			 <<"\nTime: "<<time<<endl;
	 }
	 
	 void fTransaction::read(istream & is)
	 {   
		 cout<<"Enter amount:\n";
		 is>>amount;
		  cout<<"Enter date:\n";
		  is>>date;
		  cout<<"Enter time:\n";
		  is>>time;
	 }

	 bool fTransaction::positive( )
	 {

	 }
