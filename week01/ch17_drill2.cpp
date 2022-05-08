#include "../std_lib_facilities.h"

int main()
{
	
	int* p1 = new int(7);	//allocate new int 7 and point its address to p1
	
	cout << "p1 :" << p1 << endl;	//Print out the value of p1 and...
	cout << "*p1 :" << *p1<<endl;	//Print out the int it points to
	
	
	int* p2 = new int[7]{1,2,4,8,16,32,64};	//allocate array of 7ints addressed to p2
	
	cout << "p2 :" << p2 << endl; //Print out the value of p2 and..
	cout << "Array pointed by p2 : " << endl; //Print out the array it points to.
	for (int i = 0;i < 7;i++)
		cout << p2[i] << " ";
	cout << endl;
	
	int* p3 = p2;	//Declare an int* called p3 and initialize it with p2.
	
	p2 = p1;	//Assign p1 to p2
	
	p2 = p3;	//Assign p3 to p2
	
	//Print out the values of p1 and p2 and of what they point to
	cout << "p1 :" << p1 << endl;
	cout << "p1 points to :" << *p1 << endl;
	cout << "p2 :" << p2 << endl;
	cout << "p2 points to:" << *p2 << endl;
	
	delete p1;	//Deallocate all the memory you allocated from the free store.
	delete[] p2;
	
	/*Allocate an array of ten ints; initialize it to 1, 2, 4, 8, etc.; and assign its address to a variable p1.*/
	p1 = new int[10]{ 1,2,4,8,16,32,64,128,256,512 };
	
	//Allocate an array of ten ints, and assign its address to a variable p2.
	p2 = new int[10];
	
	for (int i = 0;i < 10;i++) //copy array values pointed by p1 to array pointed by p2
		p2[i] = p1[i];
	cout << "Array p2: \n";
	for (int i = 0;i < 10;i++)
		cout << p2[i] << " ";
	cout<<endl;
	
	//use vector
	vector<int> v1{ 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
	vector<int> v2;
	for (int i = 0;i < 10;i++)
		v2.push_back(v1[i]);
	cout << "vector v2: \n";
	for (int  i : v2) 
		cout << i << " ";
	cout << endl;
	return 0;
}
