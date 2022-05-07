#include "../std_lib_facilities.h"

struct Date {
	int year, month, day;			// year, month, day
	Date(int y, int m, int d);	// check for valid date and initialize
	void add_day(int n);		// increase the Date by n days
};


Date::Date (int y, int m, int d)
{
	if (y > 0)
		year = y;
	else
		error("Invalid year");
	if (m < 13 && m > 0)
		month = m;
	else
		error("Invalid month");
	if (d > 0 && d < 32)
		day = d;
	else
		error("Invalid day");
}

void Date::add_day(int n)
{
    day += n;
    
	if (day > 31) 
	{
		month++;
		day -= 31;
		if (month > 12)
		{
			year++;
			month -= 12;
		}
	}
}


int main()
try{

     Date today{1978, 6, 25};
     cout << "today: " << today.year << "." << today.month << "." << today.day << "."<< endl;
    
   
     today.add_day(1);
     cout << "tomorrow: " << today.year << "." << today.month << "." << today.day << "."<< endl;  

     // Invalid date test
     Date testday {2002, 13, 22};

     return 0;

}catch (exception& e) {
	cout << "Error: " << e.what() << endl;
	return 1;
}
