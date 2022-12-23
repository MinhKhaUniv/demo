#include<iostream>
using namespace std;

int Mod_P3(int x, int y)
{
    int z, w;
    while(x >= y)
    {
        z = y;
        do 
        {
            w = z;
            z = z + z; // doubling z
        } while(x >= z);
        x = x - w;
    }
    return x;
}

int main() {
    cout << "Enter x, y: ";
    int x, y; 
    cin >> x >> y;
    cout << "Mod P3 : " << Mod_P3(x, y) << endl;

    return 0;
}