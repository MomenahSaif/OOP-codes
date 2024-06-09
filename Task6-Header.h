#pragma once
void Reversename(string name, int length)
{
	cout << name[length];
	Reversename(name[length - 1], length));
}
