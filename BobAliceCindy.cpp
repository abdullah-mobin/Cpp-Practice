#include <iostream>
#include <string>
using namespace std;

bool is_bob(string str)
{
    int bob = 0, dot = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == "Bob"[i] || str[i] == '.')
        {
            bob++;
        }
        if (str[i] == '.')
        {
            dot++;
        }
    }
    if (bob == str.length())
    {
        if (dot == bob)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    else
    {
        return false;
    }
}
bool is_alice(string str)
{
    int alice = 0, dot = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == "Alice"[i] || str[i] == '.')
        {
            alice++;
        }
        if (str[i] == '.')
        {
            dot++;
        }
    }
    if (alice == str.length())
    {
        if (alice == dot)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    else
    {
        return false;
    }
}
bool is_cindy(string str)
{
    int cindy = 0, dot = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == "Cindy"[i] || str[i] == '.')
        {
            cindy++;
        }
        if (str[i] == '.')
        {
            dot++;
        }
    }
    if (cindy == str.length())
    {
        if (cindy == dot)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    else
    {
        return false;
    }
}

int main()
{
    string s;
    int x;
    getline(cin, s);
    x = s.length();
    if (x == 3)
    {
        if (is_bob(s))
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "WRONG" << endl;
        }
    }
    else if (x == 5)
    {
        if (is_cindy(s))
        {
            cout << "Cindy" << endl;
        }
        else if (is_alice(s))
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "WRONG" << endl;
        }
    }
    else
    {
        cout << "WRONG" << endl;
    }

    return 0;
}