#include "../std_lib_facilities.h"

struct Date {
    int y;
    int m;
    int d;
};

Date today;

// helper functions:

void init_day(Date& dd, int y, int m, int d)
{
	if (y > 0)
		dd.y = y;
	else
		error("Invalid year");
	if (m < 13 && m > 0)
		dd.m = m;
	else
		error("Invalid month");
	if (d > 0 && d < 32)
		dd.d = d;
	else
		error("Invalid day");
}

void add_day(Date& dd, int n)
{
    //increase dd by n days
    dd.d += n;
    
	if (dd.d > 31) 
	{
		dd.m++;
		dd.d -= 31;
		if (dd.m > 12)
		{
			dd.y++;
			dd.m -= 12;
		}
	}
}


int main()
try{

    Date today; Date tomorrow;
    // set today to June 25, 1978
    init_day(today, 1978, 6, 25);
     cout << "today: " << today.y << "." << today.m << "." << today.d << "."<< endl;
    
    // set tomorrow
    tomorrow=today;
    add_day(tomorrow, 1);
     cout << "tomorrow: " << tomorrow.y << "." << tomorrow.m << "." << tomorrow.d << "."<< endl;  

    // Invalid date test
    init_day(today, 2002, 11, -22);

    return 0;

}catch (exception& e) {
	cout << "Error: " << e.what() << endl;
	return 1;
}
