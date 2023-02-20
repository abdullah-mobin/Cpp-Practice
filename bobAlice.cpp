#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int x = str.length();
    if (x == 3)
    {
        if (str[0] == 'B' || str[1] == 'o' || str[2] == 'b')
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "habi jabi" << endl;
        }
        return 0;
    }
    if (x == 5)
    {
        if (str[2] == 'i')
        {
            if (str[0] == 'A' || str[0] == 'l' || str[0] == 'i' || str[0] == 'c' || str[0] == 'e')
            {
                cout << "Alice" << endl;
            }
            else
            {
                cout << "habi jabi" << endl;
            }
            return 0;
        }
        if (str[1] == 'i')
        {
            if (str[0] == 'C' || str[0] == 'i' || str[0] == 'n' || str[0] == 'd' || str[0] == 'y')
            {
                cout << "Cindy" << endl;
            }
            else
            {
                cout << "habi jabi" << endl;
            }
            return 0;
        }
    }

    return 0;
}
