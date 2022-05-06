#include "../std_lib_facilities.h"
//exc 4
void print_array10(ostream& os, int* a)
{
	for (int i = 0;i < 10; i++)
		os << a[i] << " ";
	cout << endl;
}
//exc 7
void print_array(ostream& os, int* a,int n)
{
	for (int i = 0;i < n; i++)
		os << a[i] << " ";
	cout << endl;
}
// exc 10 
void print_vector(ostream& os, vector <int>& v )
{
	for (int i :v)
		os << i << " ";
	cout << endl;
}
// part 1
int main()
{
	// exc 1
	int* a1 = new int[10] {1,2,3,4,5,6,7,8,9,10};
	// exc 2
	for (int i = 0;i < 10;i++)
		cout << a1[i] << " ";
	cout << endl;
	// exc 3
	delete[] a1;
	// exc 5
	int* a2 = new int[10]{ 100,101,102,103,104,105,106,107,108,109 };
	print_array10(cout, a2);
	delete[] a2;
	//exc 6
	int* a3 = new int[11]{ 100,101,102,103,104,105,106,107,108,109,110 };
	for (int i = 0;i < 11;i++)
		cout << a3[i] << " ";
	cout << endl;
	delete[] a3;
	//exc 8
	int* a4 = new int[20]{ 100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119 };
	print_array(cout, a4, 20);
	delete[] a4;
	// ----------------------------------------------
	cout << "Vectors start here :\n";
	// exc 10
	vector <int> v1;
	v1.reserve(10);
	v1 = { 100,101,102,103,104,105,106,107,108,109 };
	print_vector(cout, v1);

	vector <int> v2;
	v2 = { 100,101,102,103,104,105,106,107,108,109,110 };
	print_vector(cout, v2);

	vector <int> v3;
	v3 = { 100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119 };
	print_vector(cout, v3);

	return 0;
}
