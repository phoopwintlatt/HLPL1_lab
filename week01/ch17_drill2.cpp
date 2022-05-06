#include "../std_lib_facilities.h"
// part 2
int main()
{
	// 10.1
	int* p1 = new int(7);
	// 10.2
	cout << "p1 :" << p1 << endl;
	cout << "*p1 :" << *p1<<endl;
	
	// 10.3
	int* p2 = new int[7]{1,2,4,8,16,32,64};
	//10.4
	cout << "p2 :" << p2 << endl;
	cout << "Array in p2 : " << endl;
	for (int i = 0;i < 7;i++)
		cout << p2[i] << " ";
	cout << endl;
	//10.5
	int* p3 = p2;
	// 10.6
	p2 = p1;
	//10.7
	p2 = p3;
	// 10.8 
	cout << "p1 :" << p1 << endl;
	cout << "p1 points to :" << *p1 << endl;
	cout << "p2 :" << p2 << endl;
	cout << "p2 points to:" << *p2 << endl;
	//10.9
	delete p1;
	delete[] p2;
	//10.10
	 p1 = new int[10]{ 1,2,4,8,16,32,64,128,256,512 };
	p2 = new int[10];
	for (int i = 0;i < 10;i++)
		p2[i] = p1[i];
	cout << "Array p2: \n";
	for (int i = 0;i < 10;i++)
		cout << p2[i] << " ";
	cout<<endl;
	// 10.11
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
