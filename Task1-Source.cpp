#include<iostream>
#include"Task1-Header.h"
using namespace std;
int main()
{
	int num1, num2,*ptr1,*ptr2;

	cout << "Enter two values: ";
	cin >> num1 >> num2;

	ptr1 = &num1;
	ptr2 = &num2;

	swap(ptr1, ptr2);

	cout << "The first swaped value is:" << *ptr1 << endl;
	cout<< "The second swaped value is:" << *ptr2 << endl;
}
