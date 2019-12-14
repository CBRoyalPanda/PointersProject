#include <iostream>

using namespace std;

void passByPointer(int* a);

int main()
{
	int a = 5;
	int* pA = &a;


	cout << "a = " << a << endl;
	cout << "Address of a: " << pA << endl;

	cout << "\nValue stored at " << pA << ": " << (*pA) << endl;

	passByPointer(&a);
	
	cout << "\na = " << a << endl;
	cout << "Address of a: " << pA << endl;
	
	return 0;
}

void passByPointer(int* a)
{
	(*a) += 5;
}
