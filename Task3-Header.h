#pragma once
 
int if_exists(char* ptr, char alphbet)
{
	for (int i = 0; i < 10; i++)
	{
		if (*(ptr + i) == alphbet)
			return 1;
	}

	return 0;
}