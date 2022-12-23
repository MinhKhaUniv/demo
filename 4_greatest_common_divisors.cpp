#include<iostream>
using namespace std;

int gcd_P6(int x, int y)
{
	int z = y;
	z = z + z;
	while(!(y >= z))
	{
		while(x >= z)
		{
			y = y + z;
			swap(y, z);
		}
		do
		{
			if(x >= y)
				x = x - y;
			z = z - y;
			swap(z, y);
		} while(!(y >= z));
		swap(x, y);
		z = y;
		z = z + z;
	}
	return x;
}

int main() {
    cout << "Finding the common divisor of x and y: " << endl;
    cout << "Enter x, y : ";
    int x, y;
    cin >> x >> y;
    cout << "Answer = " << gcd_P6(x, y);
    
    return 0;
}
