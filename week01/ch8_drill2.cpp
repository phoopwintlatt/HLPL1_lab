#include "../std_lib_facilities.h"

void swap_v(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;

}

void swap_r(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

/*void swap_cr(const int& a, const int& b)
{
	int temp = a;
	a = b;
	b = temp;

}*/

void swap_cr(const int& ca, const int& cb)
{
    int a, b;
    a = cb;
    b = ca;
}

int main()
{
	int x = 7;
	int y = 9;
	swap_r(x, y);
	cout << x << "  " << y << endl;
	swap_cr(x, y);
	cout << x << "  " << y << endl;
	const int cx = 7;
	const int cy = 9;

	swap_cr(cx, cy);
	cout << cx << "  " << cy << endl;
	swap_v(7.7, 9.9);
	
	
	double dx = 7.7;
	double dy = 9.9;
	swap_cr(dx, dy);
	cout << dx << "  " << dy << endl;
	return 0;
}
