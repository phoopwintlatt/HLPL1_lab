#include "../std_lib_facilities.h"

void print_array10(ostream& os, int* a) //function to print out array of 10int to os
{
	for (int i = 0;i < 10; i++)
		os << a[i] << " ";
	cout << endl;
}

void print_array(ostream& os, int* a,int n)	//function to print out array of n elements to os
{
	for (int i = 0;i < n; i++)
		os << a[i] << " ";
	cout << endl;
}

void print_vector(ostream& os, vector <int>& v )	// to print vector
{
	for (int i :v)
		os << i << " ";
	cout << endl;
}

int main()
{
	int* a1 = new int[10] {1,2,3,4,5,6,7,8,9,10};	// allocate 10int array on free store
	
	for (int i = 0;i < 10;i++)	//print
		cout << a1[i] << " ";
	cout << endl;
	
	delete[] a1;	//print
	
	
	int* a2 = new int[10]{ 100,101,102,103,104,105,106,107,108,109 };	// allocate array of 10int on free store starting 100,101,102...
	print_array10(cout, a2);
	delete[] a2;
	
	int* a3 = new int[11]{ 100,101,102,103,104,105,106,107,108,109,110 };	// allocate array of 11int on free store starting 100,101,102...
	for (int i = 0;i < 11;i++)
		cout << a3[i] << " ";
	cout << endl;
	delete[] a3;
	
	int* a4 = new int[20]{ 100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119 };	// allocate array of 20int on free store starting 100,101,102...
	print_array(cout, a4, 20);
	delete[] a4;
	
	//using vectors
	cout << "Vectors instead of an array :\n";
	
	vector <int> v1={ 100,101,102,103,104,105,106,107,108,109 };
	print_vector(cout, v1);

	vector <int> v2 = { 100,101,102,103,104,105,106,107,108,109,110 };
	print_vector(cout, v2);

	vector <int> v3 = { 100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119 };
	print_vector(cout, v3);

	return 0;
}
