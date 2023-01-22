//cpp code to convert decimal to binary

#include <iostream>
using namespace std;

int main()
{
    int dec, bin, rem, x;
    cin >> dec;
    bin = 0;
    x=1; 
    while (dec!= 0)
    {
        rem = dec % 2;
        bin = bin + (rem *x);
        x = x * 10;
        dec = dec / 2;
        
    }
    cout << bin << endl;
    return 0;
}
