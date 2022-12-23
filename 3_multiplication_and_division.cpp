#include<iostream>
using namespace std;

int Multiplication_and_Division_P5(int x, int y, int z)
{
	int w = 0;
	int u, v;
	if(y >= z)
	{
		u = x;
		v = z;
		do
		{
			u = u + x; // <u, x> <- <x, u + x>
			swap(x, u);

			v = v + z; // <v, z> <- <z, v + z>
			swap(v, z);
		} while(y >= z);

		do
		{
			if(y >= v)
			{
				y = y - v;
				w = w + u;
			}
			x = x - u; // <u, x> <- <x - u, u>
			swap(x, u);

			z = z - v; // <v, z> <- <z - v, v>
			swap(z, v);
		} while(!(v >= z));
	}
	return w;
}

int main() {
    cout << "Calculate x.[y/z]:" << endl;
    cout << "Enter x, y, z : ";
    int x, y, z;
    cin >> x >> y >> z;
    cout << "x.[y/z] = " << Multiplication_and_Division_P5(x, y, z);
    return 0;
}