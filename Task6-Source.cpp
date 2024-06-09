#include<iostream>
#include<string>

using namespace std;
void Reversename(string name, int length)
{
	cout << name[length];
	length = length - 1;
	Reversename(name, length);
}

int main()
{
	string name;
	int length;

	cout << "Enter your name" << endl;
	getline(cin, name);

	length = name.length();

	cout << "The reversed name is:" << endl;
	Reversename(name, length);

}
