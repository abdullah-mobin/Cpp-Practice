#include <iostream>
#define size 5
using namespace std;

int main()
{
    int arr[size], c = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            c++;
        }
    }
    cout << c << " valores pares" << endl;

    return 0;
}