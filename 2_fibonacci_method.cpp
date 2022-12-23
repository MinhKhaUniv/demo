#include<iostream>
using namespace std;

int Mod_P4(int x, int y)
{
	int z;
	if(x >= y)
	{
		z = y;
		do
		{
			y = y + z;
			swap(y, z);
		} while(x >= z);
		do
		{
			if(x >= y)
				x = x - y;

			z = z - y; // <y, z> <- <z - y, y>
			swap(y, z);
		} while(!(y >= z));

	}
	return x;
}