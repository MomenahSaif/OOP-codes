#pragma once
int swap(int* ptr1, int* ptr2)
{
	int temp;

	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

	return 0;
}
