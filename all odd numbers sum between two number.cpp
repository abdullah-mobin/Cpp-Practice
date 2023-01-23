//all odd numbers sum between two number

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, sum = 0;
        cin >> a >> b;
        if (a < b)
        {
            for (int i = a + 1; i < b; i++)
            {
                if (i % 2 == 1)
                {
                    sum = sum + i;
                }
            }
        }
        else
        {
            for (int i = b + 1; i < a; i++)
            {
                if (i % 2 == 1)
                {
                    sum = sum + i;
                }
            }
        }
        cout << sum << endl;
    }

    return 0;
}
